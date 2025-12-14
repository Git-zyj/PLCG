/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177777
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) 12354188167955098819ULL);
                var_17 = ((/* implicit */signed char) (((-(var_9))) * (((/* implicit */long long int) ((/* implicit */int) ((-1998983984) > (((/* implicit */int) (unsigned char)1))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_18 = ((((((-1) - (((/* implicit */int) (unsigned char)3)))) < (((/* implicit */int) arr_2 [i_1])))) ? (((/* implicit */unsigned long long int) -646857728)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))))), ((-(16262353866933395432ULL))))));
                            var_19 = ((/* implicit */unsigned short) ((((3663030402U) << (((/* implicit */int) (unsigned char)3)))) | (((/* implicit */unsigned int) ((int) min((((/* implicit */short) (unsigned char)253)), ((short)26270)))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)76))))) ? (((/* implicit */int) min((arr_3 [i_3 - 1]), (((/* implicit */unsigned short) (_Bool)1))))) : ((-(((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) min((((((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (short)-23665)) : (((/* implicit */int) (unsigned char)0)))) + (2147483647))) << (((/* implicit */int) ((6092555905754452785ULL) >= (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))))), ((~((-(((/* implicit */int) (signed char)55))))))));
                arr_14 [8LL] [8LL] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)239)), (13890679943458976342ULL)));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) var_12))))) % ((~((+(((/* implicit */int) (unsigned char)251))))))));
    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
}
