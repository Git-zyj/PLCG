/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106454
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_15))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned char)56);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (2382978338U) : (2382978343U))));
        var_20 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 576460752169205760LL)))) > (((((/* implicit */_Bool) -8393243634576516604LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (1911988958U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 = (unsigned char)192;
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((min((min((((/* implicit */long long int) var_5)), (arr_0 [i_1]))), (min((-576460752169205768LL), (((/* implicit */long long int) arr_1 [i_1] [i_1])))))), (((/* implicit */long long int) min((((unsigned short) -576460752169205755LL)), (((/* implicit */unsigned short) (unsigned char)112))))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_2 [18ULL]))) >> (((((/* implicit */int) (unsigned char)112)) - (87)))));
        var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_2)) : (max((12396819571379313788ULL), (((/* implicit */unsigned long long int) arr_5 [i_1]))))))));
        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) & (((unsigned int) arr_5 [i_1])))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 + 3] [i_3]))));
            var_27 = ((/* implicit */long long int) (_Bool)0);
            arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((unsigned int) (unsigned char)255)) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_2] [i_2]))))));
        }
        var_28 = (+(arr_2 [i_2]));
        var_29 = ((/* implicit */unsigned char) arr_0 [i_2]);
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (max((max((2849826664U), (((/* implicit */unsigned int) (unsigned char)167)))), (((/* implicit */unsigned int) (unsigned char)68))))));
                    arr_24 [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((6549486973401263026LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                    arr_25 [i_4] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)18)) ? (((long long int) -576460752169205732LL)) : (((/* implicit */long long int) ((((12198731778363349619ULL) <= (6248012295346201991ULL))) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) min(((unsigned char)230), ((unsigned char)209)))))))));
                }
                var_30 = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_5] [i_4]))))), (min((arr_15 [i_4]), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_4])))));
            }
        } 
    } 
}
