/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17531
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) var_9)) : (max((var_11), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) -1548784159))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 2]))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0])) || (((/* implicit */_Bool) var_4))))))) : ((~((-(((/* implicit */int) (unsigned char)55))))))));
                            arr_16 [i_2] [i_1] [i_2] [(signed char)6] = ((/* implicit */unsigned int) min(((_Bool)0), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) >= (min((2925151255U), (((/* implicit */unsigned int) (_Bool)1))))))));
                            var_15 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_14 [i_0]))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)110)))) << (((((((/* implicit */_Bool) (unsigned short)7888)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) + (81))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (arr_15 [i_0] [(_Bool)1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) max((637969703U), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)166)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_10))))))) ? (max((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [(unsigned short)3]), (((/* implicit */unsigned char) (_Bool)0))))))));
            }
        } 
    } 
}
