/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159247
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
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_5 [i_0] [i_2] [i_2])) & (-3911671385962969717LL)))) > (((unsigned long long int) (signed char)-71))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = (+(((/* implicit */int) ((134213632) == (-1837227266)))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)22194)), (1837227245)))) && (((/* implicit */_Bool) (+(arr_9 [i_3] [i_2] [i_3]))))))) : (((/* implicit */int) (unsigned char)140)))))));
                                arr_12 [2] [i_2] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-93))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2] [i_2] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) -7687443691665723855LL)) ? (6796179714485835715LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)22295)) ? (-886298362) : (((/* implicit */int) var_7))))) <= (max((((/* implicit */long long int) var_7)), (-7150405519229412921LL)))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                {
                    arr_17 [(signed char)11] [(signed char)11] [i_5] = ((/* implicit */int) var_11);
                    arr_18 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((arr_10 [2] [14LL] [i_0] [i_1] [i_1] [i_5] [i_5]) + (-5535101327525597427LL))));
                    var_20 ^= ((/* implicit */short) var_2);
                    var_21 = ((/* implicit */unsigned short) ((-2086695030) & (((/* implicit */int) ((2086695032) == (((/* implicit */int) arr_2 [i_0])))))));
                    var_22 += ((/* implicit */signed char) max((min((((long long int) var_9)), (((/* implicit */long long int) (!(((/* implicit */_Bool) -2086695031))))))), (((/* implicit */long long int) var_11))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    arr_22 [1LL] [i_1] = 1895940255;
                    var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1545629600)) ? (((/* implicit */int) arr_19 [i_0])) : (var_6))) >= (((/* implicit */int) var_11))));
                }
                var_24 = (+(1047269254899962547LL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (short i_8 = 4; i_8 < 16; i_8 += 1) 
        {
            {
                var_25 = ((/* implicit */short) max((((/* implicit */long long int) 1837227266)), (772643011958900885LL)));
                var_26 &= ((/* implicit */short) (!((!(((/* implicit */_Bool) max((var_1), (arr_24 [i_8 - 2]))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned long long int) ((int) (-(-3063219941307090818LL))))))))));
}
