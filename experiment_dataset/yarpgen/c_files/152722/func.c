/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152722
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
    var_20 ^= ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)50840)), (168483485))))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-8583)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (signed char)105)))))) ? ((~((~(((/* implicit */int) var_14)))))) : ((+(arr_5 [i_4] [i_2] [i_1] [i_0])))));
                                var_22 = ((/* implicit */short) (!(((_Bool) max((-983605469), (((/* implicit */int) var_17)))))));
                                arr_16 [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) -168483486);
                                var_23 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7456)))))));
                            }
                        } 
                    } 
                    arr_17 [(unsigned short)19] [i_1] = ((/* implicit */short) (+(max((((/* implicit */int) var_7)), (((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2] [i_2])) + (arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */int) (~(((((/* implicit */long long int) (~(((/* implicit */int) var_17))))) | (min((var_16), (((/* implicit */long long int) var_1))))))));
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) max(((signed char)26), (((/* implicit */signed char) var_8))))), (var_4)));
}
