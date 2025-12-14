/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159125
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) ((-293897116) & (((/* implicit */int) (short)-8814))))) ? (min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_3] [i_1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])), (var_12))))));
                            var_14 *= ((/* implicit */signed char) min((((unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24068))) / (((var_11) & (((/* implicit */unsigned long long int) var_3))))))));
                            var_15 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_0))))), (min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_8))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 4; i_4 < 21; i_4 += 2) 
                            {
                                var_16 *= ((/* implicit */unsigned char) (signed char)-56);
                                var_17 *= ((/* implicit */short) var_8);
                            }
                            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */signed char) ((max((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-87)), (-871657980)))))) % (((/* implicit */unsigned long long int) (+(var_6))))));
                                var_19 = ((((/* implicit */_Bool) max((((511) ^ (var_12))), (((/* implicit */int) (unsigned char)116))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((var_5), (((/* implicit */long long int) -508)))) == (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)146))))))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [(signed char)12] [i_0])) ? (var_3) : (max((var_5), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_1] [i_0])))))));
                            }
                            var_20 = ((var_5) % (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) var_7)) == (var_10)))), (max((((/* implicit */int) (signed char)-56)), (-2142926626)))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((-1983656340) % (arr_7 [i_0] [i_0] [i_0] [i_1])))) & (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) 505))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)5)) : (var_4)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                var_21 -= ((/* implicit */unsigned char) min((((((-1115565396641242105LL) - (((/* implicit */long long int) 2584710003U)))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) & (var_5))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)15872), (((/* implicit */unsigned short) (unsigned char)128))))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)3077)) && (((/* implicit */_Bool) (signed char)51)))))))), (var_3)));
}
