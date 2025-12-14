/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17931
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
    var_16 = ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)32755))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((((-(var_11))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32280))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
    }
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    arr_11 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(var_4)));
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2147418112U)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_3])) : (-1179957822))) - (((((/* implicit */_Bool) arr_1 [i_3])) ? (1355126448) : (-1179957835)))));
                    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_2 [i_1])) ? (1355126452) : (-1355126446))) - (((/* implicit */int) (unsigned short)23915)))) >= (-1355126434)));
                    var_19 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)26))))));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 14; i_4 += 4) /* same iter space */
                {
                    arr_15 [i_2] = ((/* implicit */long long int) 2147549154U);
                    var_20 = ((/* implicit */int) var_0);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2] [i_4]))))) : (var_14)));
                }
                for (signed char i_5 = 3; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_5] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)16))))) ? ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_9)))) / (((/* implicit */int) arr_5 [i_2]))));
                    arr_20 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-17885)) == (arr_7 [i_2]))))) - (((arr_17 [i_1] [i_1] [i_2] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-32754)))))));
                    arr_21 [i_2] = (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 1])))));
                }
                arr_22 [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_15)))));
                arr_23 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (813065727) : (((/* implicit */int) (unsigned char)17))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) ^ ((+(arr_18 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)83), (var_12)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2]))))))));
                arr_24 [13] [i_2] = ((/* implicit */unsigned int) (-(arr_18 [(short)8])));
            }
        } 
    } 
}
