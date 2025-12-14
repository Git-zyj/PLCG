/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111444
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
    var_14 = var_7;
    var_15 = min((((((/* implicit */_Bool) ((long long int) (signed char)-98))) ? (var_13) : (((/* implicit */long long int) (~(4294967282U)))))), (((/* implicit */long long int) var_9)));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_2)) ? (-6793382695894208807LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-6793382695894208808LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-98)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) ((max((var_8), (((/* implicit */long long int) (unsigned char)124)))) < (((/* implicit */long long int) ((int) ((_Bool) arr_3 [i_1] [i_1] [i_1]))))));
                var_18 = arr_3 [i_1 - 1] [i_1] [(_Bool)1];
                var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) <= (4294967286U));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned int i_3 = 4; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3] [i_3])) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_2] [(unsigned char)15])), ((unsigned char)254))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)1)))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (arr_8 [i_3 - 4] [i_3 - 1] [i_3 - 4])))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) + (arr_5 [i_4] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_2] [i_5])), (var_6)))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)4]))) : (8812865773901764577ULL))), (((/* implicit */unsigned long long int) var_6)))) : (min((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (arr_5 [i_2] [i_2])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14))) : (min((arr_5 [i_2] [i_3]), (arr_5 [(_Bool)0] [i_2])))));
                /* LoopNest 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_6] [i_6] [i_6]))) && (((/* implicit */_Bool) ((signed char) (unsigned char)1))))))));
                                var_25 = ((/* implicit */unsigned long long int) (unsigned char)0);
                                var_26 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_16 [i_2] [i_6] [i_6] [i_3 - 4])), (min((((/* implicit */unsigned long long int) (unsigned char)22)), (8ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)14)), (3290064773U)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)64)))) : (((/* implicit */int) (signed char)-59)))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)237))));
            }
        } 
    } 
}
