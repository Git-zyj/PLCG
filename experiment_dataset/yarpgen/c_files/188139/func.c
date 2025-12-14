/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188139
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
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                arr_5 [(unsigned char)7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)40057)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8760321074191261598LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))) : (arr_2 [i_0 + 1])))) ? (((/* implicit */int) ((arr_2 [8U]) < (((3936704051U) / (((/* implicit */unsigned int) var_13))))))) : (((((/* implicit */int) (unsigned char)32)) - (((/* implicit */int) var_7))))));
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) 1234281115U)) <= (18LL)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)25478)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3])) && (((/* implicit */_Bool) (unsigned char)1)))))) : (((unsigned int) -5604504991760882009LL))))) && (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [1U] [(_Bool)1] [i_3] [i_0])) || (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_1] [i_1] [12U])) ? (-1164659256) : (((/* implicit */int) var_2)))))))));
                                arr_14 [(unsigned char)1] [i_4] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) (((-(arr_3 [i_0] [i_0] [i_0]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)65535)))))));
                                arr_15 [i_0] [7LL] [(_Bool)1] [6LL] [16LL] [i_4] = ((/* implicit */unsigned char) (unsigned short)65535);
                                arr_16 [18U] [18U] [i_0] [7U] [i_0] = ((/* implicit */int) ((unsigned char) (unsigned char)119));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16370)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)16370))))));
    var_22 = ((/* implicit */signed char) max((((unsigned int) ((((/* implicit */_Bool) 16372376806960890218ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (var_15)))), (((/* implicit */unsigned int) var_17))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_10)))) ? (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)16320)))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (_Bool)1))))))) : ((-(((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))))))))));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
        {
            for (long long int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [7LL] [i_5])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_11 [i_5] [5LL] [i_6] [5LL] [i_5])), ((unsigned char)5)))), (((((/* implicit */_Bool) arr_1 [i_5])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))))) : (min((arr_7 [i_5]), (((/* implicit */long long int) arr_11 [i_5] [(unsigned short)12] [i_7] [(unsigned short)2] [i_5]))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) / (arr_9 [i_7] [i_6 + 1] [i_6 + 1] [i_5])))))), (2074367266748661398ULL))))));
                }
            } 
        } 
    } 
}
