/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172651
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0 + 3]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(short)2]))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_1 [i_0 - 3] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) <= (((/* implicit */int) var_6)))))))))));
                    var_13 = ((/* implicit */short) arr_0 [i_0]);
                    arr_8 [i_0 + 3] [i_0] [i_0] [i_0] = min((2563152251426320639ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)125), ((signed char)-116)))) ? (((((/* implicit */int) (unsigned char)128)) | (((/* implicit */int) (signed char)-126)))) : (((((/* implicit */_Bool) 14585974073828101611ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_4))))))));
                }
                var_14 = ((/* implicit */int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (8822843966996641787ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_3)))))))))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) : (arr_2 [i_0] [i_0 + 1] [i_0]))) != (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4089179015U)) || (((/* implicit */_Bool) var_10)))))) : (arr_2 [3U] [i_1] [i_0])))));
                arr_9 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_0))))) != (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)134), (var_3)))))))) : (-2147483640)));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1801266401)) || (((/* implicit */_Bool) var_9)))))));
    var_17 *= ((/* implicit */unsigned char) (signed char)(-127 - 1));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 9; i_4 += 2) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((((((/* implicit */int) arr_14 [i_4 + 2] [i_3] [i_3])) << (((((((/* implicit */int) arr_12 [i_5 + 2])) + (30866))) - (6))))), (((((/* implicit */_Bool) min((8651017210595187081ULL), (((/* implicit */unsigned long long int) (unsigned char)122))))) ? (((((/* implicit */_Bool) arr_15 [i_4 + 3])) ? (((/* implicit */int) arr_16 [i_3 - 1])) : (((/* implicit */int) arr_14 [10ULL] [1] [6])))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) arr_17 [i_4] [i_4 + 1] [8] [i_4])) : (((/* implicit */int) arr_17 [i_5] [i_4 + 1] [i_3] [i_3 + 1]))))))));
                    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 431612154)) ? (arr_10 [i_3]) : (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_9)))))))), (min((var_6), (((/* implicit */unsigned short) var_2))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-4)), (arr_15 [10])))))) / ((-(((((/* implicit */int) arr_14 [i_3] [7LL] [i_5])) * (((/* implicit */int) arr_11 [i_4 + 2])))))))))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_16 [i_3]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1801266403)), (2559552613188136304ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3]))) : (((max((((/* implicit */unsigned long long int) var_0)), (7016917681065263065ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_5))))))))));
                    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_5])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [0ULL] [i_3] [i_5])))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -1801266411)) : (8186416785066378389ULL))), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_3 - 1] [8U] [i_5])))) : (max((15887191460521415311ULL), (10260327288643173227ULL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (_Bool)1))));
}
