/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102240
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_18))))) <= (((unsigned long long int) var_4)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((unsigned int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_1])) & (((/* implicit */int) (short)-20364)))))));
                            arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_3 + 2] [i_2] [i_4] = (unsigned short)65535;
                            arr_14 [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(max((arr_12 [i_2] [i_2] [i_2] [i_3 - 1] [i_4 - 1] [i_2] [i_2]), (arr_1 [i_2 - 2])))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1])) <= (var_2))) ? (min((((/* implicit */int) (short)23420)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1])));
            var_22 = ((/* implicit */unsigned short) (-(687553584)));
        }
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */short) (!(((((/* implicit */int) ((signed char) (unsigned char)222))) > ((~(((/* implicit */int) arr_7 [i_0] [i_7] [i_6] [i_7]))))))));
                        arr_26 [i_0] [i_0] [i_7] = ((/* implicit */short) max(((+((-(2320764425U))))), (((/* implicit */unsigned int) arr_10 [i_7] [i_5] [i_0]))));
                    }
                } 
            } 
            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))))) >= (((((/* implicit */_Bool) min((var_2), (3576782983U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((65011712U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
            arr_28 [i_0] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_3))))));
            arr_29 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))));
        }
        var_23 -= ((/* implicit */short) (+(((/* implicit */int) (signed char)96))));
    }
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (var_15)));
    var_25 = var_18;
}
