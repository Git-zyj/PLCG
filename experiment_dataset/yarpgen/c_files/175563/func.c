/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175563
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
    var_10 = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_2))), (((/* implicit */int) ((short) 965803191)))))));
    var_11 |= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 |= ((((/* implicit */_Bool) (-(arr_1 [8])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)29574))))) : (((12644059479000988112ULL) * (((/* implicit */unsigned long long int) var_2)))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [(_Bool)1]))));
        var_14 |= ((/* implicit */_Bool) ((((arr_1 [(unsigned char)10]) + (2147483647))) >> ((((+(var_5))) - (3551877682U)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_15 += ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) % (arr_7 [8] [i_1] [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_3]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 9; i_4 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (5802684594708563503ULL)))));
                            var_17 = ((/* implicit */unsigned char) ((_Bool) ((var_1) ? (12644059479000988100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10)) % (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_3] [i_1] [i_1] [i_1]))) : (((/* implicit */int) (unsigned short)10)))))));
                        }
                        for (short i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_5)));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) 5802684594708563504ULL);
                        }
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) (((-(var_5))) > (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)13)))) == (((/* implicit */int) (short)-6))))))));
}
