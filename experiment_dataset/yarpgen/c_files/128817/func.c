/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128817
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)21135)) != (((/* implicit */int) (unsigned short)44401)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)44401)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28136)) ^ (((/* implicit */int) (unsigned short)21120))))) ? ((((_Bool)1) ? (-4671317753217831303LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (-4671317753217831320LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    var_11 = ((/* implicit */signed char) (_Bool)1);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [18LL] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60256)))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) == (arr_2 [i_0] [(_Bool)1])))) : (((/* implicit */int) arr_5 [i_0 + 2] [18ULL] [10] [i_0 + 2]))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_5] [i_3] [i_3] [0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)237)), (arr_18 [i_0] [12] [12] [i_0] [i_5])))) < (arr_15 [(unsigned char)4]))))));
                                arr_22 [i_0] = ((/* implicit */long long int) arr_15 [i_1]);
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)51);
                    arr_24 [i_0] = min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max((arr_20 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_1] [i_3]), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3374296344095836955LL)) ? (min(((~(-3374296344095836956LL))), ((-(arr_2 [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(-3374296344095836955LL))))))));
                }
                arr_26 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_0 + 3] [i_0 - 1] [i_0 + 3])) ? (((long long int) arr_15 [i_0])) : (((/* implicit */long long int) 3836868072U)))) - (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-12)))))))));
                arr_27 [i_0] [10U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21135))) - ((-(arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2])))));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)64512), (((/* implicit */unsigned short) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(470577168611424864ULL)))) ? (((var_5) ? (1373956827U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2142255509U)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_3);
}
