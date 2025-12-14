/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169027
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) -9064708271389950371LL)))));
        arr_3 [i_0 - 1] = ((/* implicit */signed char) (unsigned short)53556);
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 357410508U)) ? (((/* implicit */unsigned int) 1)) : (357410525U))))) << (((((/* implicit */int) var_5)) - (72)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_2] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) var_6);
                                arr_16 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (3937556780U)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0 + 2] [i_2] [i_0 + 3] = ((/* implicit */unsigned short) 8755765854576194627ULL);
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */signed char) 1376131952);
    }
    for (long long int i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(1376131952)))) * (((((((/* implicit */_Bool) 14600809290090776354ULL)) || (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5 - 1] [i_5])))))) : (357410515U)))));
        arr_23 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_6 [i_5] [i_5])) % (((/* implicit */int) arr_1 [i_5]))))))) || ((!(((var_3) < (((/* implicit */int) (signed char)-15))))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_16))) ? (((var_2) << (((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_17))))) - (8359))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_10)) % (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
}
