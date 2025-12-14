/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110534
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) ((((var_6) % (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_12))))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_14)))))));
        var_16 = ((/* implicit */long long int) max((((((/* implicit */int) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) << (((/* implicit */int) var_1)))), (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1))))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), ((((!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)5362)))))))));
        arr_7 [i_1 - 1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)60173)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((((/* implicit */int) var_1)) == (var_11))))))));
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) & (var_6)))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_2))))))) && (((/* implicit */_Bool) var_5))));
                        arr_17 [3ULL] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_1)))))) == ((-(var_3))))))));
                        var_19 ^= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (var_3)))))), (((((/* implicit */long long int) var_9)) - ((+(var_6)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) var_7);
        }
        for (long long int i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((6457014773107859666LL) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)18806))))))))));
            var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)5362))))));
        }
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            var_23 = ((((/* implicit */int) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62546)))))))));
            var_24 = ((/* implicit */unsigned short) (+(((((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (var_10)))));
            arr_23 [i_6] = ((/* implicit */unsigned int) (+((((((+(-6457014773107859667LL))) + (9223372036854775807LL))) << ((((-(3845371947U))) - (449595349U)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            arr_26 [i_1 + 2] = ((/* implicit */signed char) (((-((-(var_4))))) + (((/* implicit */unsigned int) (-(((((/* implicit */int) var_8)) / (((/* implicit */int) var_8)))))))));
            var_25 -= (((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62546))) - (910685560U))))) << (((/* implicit */int) ((273720660U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60185)))))));
        }
        var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (!(var_2)))), (var_14)))) << (((/* implicit */int) ((((((/* implicit */unsigned int) 1261595156)) + (536870911U))) <= (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_0))))))))));
    }
    var_27 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) 4294967295U)))) || (((/* implicit */_Bool) (unsigned char)55)))))));
}
