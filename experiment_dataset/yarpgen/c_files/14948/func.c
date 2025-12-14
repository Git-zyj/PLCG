/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14948
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
    var_18 = ((/* implicit */long long int) var_8);
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] &= 3708227512U;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((((/* implicit */int) (unsigned short)6)) ^ (((/* implicit */int) (unsigned short)65522)))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                            {
                                arr_13 [i_4] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)14), (((/* implicit */unsigned short) arr_8 [i_4 - 1] [i_4] [i_4 + 1] [10LL] [i_4 + 1]))))) <= (((((/* implicit */int) (unsigned short)6)) ^ (((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))))));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3] [i_4 - 2])))))) : (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)7936))))))), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7))))) : (arr_5 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1])))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned short) var_13);
                                var_23 = 2220327229083224426ULL;
                                var_24 *= ((/* implicit */unsigned long long int) (!(((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_5])))) < (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_2] [i_2]))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_6] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (unsigned short)6)) - (((/* implicit */int) var_14)))));
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65529)) ? (6396885976771143798ULL) : (((/* implicit */unsigned long long int) 8510310799107801925LL))));
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) var_2);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_0);
}
