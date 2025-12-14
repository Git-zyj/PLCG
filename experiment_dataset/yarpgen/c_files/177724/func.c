/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177724
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((9987610717092317013ULL) % (16992047190574354178ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((((+(var_6))) * (((/* implicit */long long int) ((/* implicit */int) ((var_1) && (((/* implicit */_Bool) var_8))))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((arr_10 [i_1 + 3] [i_2 - 3] [1ULL] [1ULL] [i_2 - 4]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17)) ? (((/* implicit */long long int) 27)) : (var_5)))))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_1] [i_0] [i_4] = ((_Bool) max((((((/* implicit */_Bool) 1125899906842112ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])))), ((-(((/* implicit */int) var_8))))));
                            var_11 ^= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38601)) ? (((/* implicit */unsigned long long int) 40)) : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) -15)) : (((((/* implicit */_Bool) arr_8 [i_4] [i_3] [(short)2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))))));
                            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((-(((var_6) / (var_5))))), (((/* implicit */long long int) ((var_9) == (((/* implicit */unsigned long long int) var_6)))))));
                            var_12 = ((/* implicit */_Bool) arr_3 [i_0]);
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4])) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)7082)) : (((/* implicit */int) var_2))))))) ? (((((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))))))));
                        }
                    }
                } 
            } 
            arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-9124))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (max((((/* implicit */unsigned int) var_0)), (3146669909U))) : (((/* implicit */unsigned int) ((var_1) ? (1793998241) : (1557415996))))))) : (var_5)));
            arr_16 [(unsigned char)1] [i_1] [i_1 + 1] |= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_7 [0LL] [i_1 + 1] [0LL])) | (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        arr_25 [i_1] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) -32)) <= (arr_2 [i_0])))) < (((45) >> (((((/* implicit */int) arr_6 [i_6] [i_5 - 2] [i_0] [i_0])) - (68))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < ((-(((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 - 2])))))))) : ((+(arr_10 [i_1] [i_1] [i_1] [i_1 - 1] [i_5 - 2])))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        }
        var_15 = ((/* implicit */_Bool) (-(54)));
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 45))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_3)))));
}
