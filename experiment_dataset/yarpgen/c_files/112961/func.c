/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112961
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)43)) ? (arr_0 [i_0]) : ((~(((/* implicit */int) ((((/* implicit */int) var_13)) <= (947189549))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(arr_0 [i_0])))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (var_8))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232)))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))) / (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) -1LL);
        arr_10 [i_1] = ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_7 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1] [i_1 + 1])))) - (((((/* implicit */int) arr_7 [i_1] [i_1 + 1])) | (((/* implicit */int) arr_7 [i_1] [i_1 - 2])))));
        arr_11 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17716)) != (var_4))))))) ? (((((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (var_10)))) % (((/* implicit */int) (signed char)104)))) : (((/* implicit */int) var_9))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */int) ((signed char) (unsigned char)203));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_19 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((arr_8 [i_2] [i_3]) / (arr_8 [i_2] [i_2]))) / (((/* implicit */unsigned long long int) max((((unsigned int) -1694370256)), (var_6))))));
            arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_10))))) + (max((((/* implicit */unsigned long long int) (unsigned char)56)), (13900259039213502833ULL)))))) ? ((-(8965303030954218924LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            arr_21 [i_2] = ((/* implicit */unsigned char) max((arr_8 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-2718191638056496155LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))));
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((-1694370256) & (((/* implicit */int) ((8965303030954218924LL) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) -8965303030954218919LL)) != (var_8)))) & (((/* implicit */int) var_1))))));
        }
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (-1430372798)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_15 [i_2] [i_2]))))) + (4546485034496048782ULL)));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            {
                arr_28 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_10))))) ? (13900259039213502833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4]))))))));
                arr_29 [i_5] = ((/* implicit */unsigned short) (unsigned char)203);
            }
        } 
    } 
    var_19 = (~(((((_Bool) var_11)) ? (max((var_6), (((/* implicit */unsigned int) -947189549)))) : (max((var_15), (((/* implicit */unsigned int) var_9)))))));
}
