/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163757
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
    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (var_9) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))) ? (max((var_1), (max((((/* implicit */unsigned long long int) (signed char)22)), (140720308486144ULL))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1737960123))))) : (-1737960123))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 1737960123)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        var_15 = (-(((/* implicit */int) arr_4 [i_3 - 1] [i_2 - 3])));
                        arr_13 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_0 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_14 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) arr_6 [i_1] [i_1])) : (1339583436108885826LL)))) ? (((/* implicit */unsigned int) 1635314702)) : (arr_6 [i_1] [i_1])));
                    }
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_17 [i_1] [i_2] [i_1] = ((/* implicit */signed char) (+((~(((unsigned int) arr_5 [i_0 - 1] [i_2]))))));
                        var_16 ^= (-(max((arr_1 [i_0 - 2] [i_2 - 1]), (arr_1 [i_0 - 2] [i_2 - 2]))));
                    }
                }
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [(short)5]))));
                    arr_21 [i_1] [i_0] [10ULL] [i_1] = ((/* implicit */short) (((_Bool)1) ? (14865775730802602168ULL) : (17928937223627969100ULL)));
                }
                var_18 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_3 [(signed char)7])) / (((/* implicit */int) (unsigned char)120)))), (((/* implicit */int) ((9738752803594476816ULL) >= (arr_15 [i_1] [1U] [(short)6] [(_Bool)1]))))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (_Bool)0)), (4839968071396599201ULL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        arr_24 [i_6] = (+(((/* implicit */int) ((_Bool) 14865775730802602168ULL))));
        arr_25 [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)120))));
        /* LoopSeq 1 */
        for (long long int i_7 = 3; i_7 < 22; i_7 += 4) 
        {
            arr_29 [(short)22] [(short)22] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)120)) ? (602285220U) : (((/* implicit */unsigned int) -22))));
            arr_30 [i_7] [i_7] [i_6] = ((/* implicit */int) arr_18 [i_6] [i_6] [i_6]);
        }
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((min((min((17784797346191138814ULL), (((/* implicit */unsigned long long int) 1339583436108885826LL)))), (10449439813557694749ULL))), (((/* implicit */unsigned long long int) max(((~(var_2))), (((/* implicit */long long int) var_13))))))))));
}
