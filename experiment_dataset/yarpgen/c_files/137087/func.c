/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137087
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
    var_10 = (-(max((max((((/* implicit */unsigned long long int) var_6)), (var_5))), (min((((/* implicit */unsigned long long int) (signed char)15)), (7537008919503723959ULL))))));
    var_11 = ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_9))))) >= (min((((/* implicit */unsigned long long int) var_9)), (var_5))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_6))))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned int) var_5);
                    arr_12 [i_0] [22] [16LL] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) | ((-(var_0)))));
                    var_13 += (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                    arr_13 [i_2] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_2)) : (var_3)));
                }
                arr_14 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (var_2)))), (var_0))) - ((~(max((((/* implicit */unsigned long long int) var_2)), (var_0)))))));
                var_14 = ((/* implicit */long long int) min((max((var_0), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_4))));
            }
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((min((var_0), (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_1)), (var_3))) * (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))))))));
            arr_15 [(signed char)8] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_6)), (min((((/* implicit */int) var_4)), (var_1))))) != (((/* implicit */int) ((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) var_1))))) <= (((/* implicit */int) var_9)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 2; i_4 < 9; i_4 += 4) /* same iter space */
    {
        arr_19 [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        var_16 += ((/* implicit */unsigned long long int) ((((var_1) / (((/* implicit */int) var_6)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_6)))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5))) | (((/* implicit */unsigned long long int) var_7))))));
        arr_20 [i_4] [i_4] = ((/* implicit */long long int) ((((7537008919503723962ULL) >> (((((/* implicit */int) (short)-25820)) + (25854))))) | (((/* implicit */unsigned long long int) ((var_2) % (var_1))))));
    }
    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */long long int) (~(((613030711217531291ULL) >> (((((/* implicit */int) max(((short)25823), (((/* implicit */short) (unsigned char)127))))) - (25810)))))));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (((-(((/* implicit */int) var_9)))) >= ((-(((/* implicit */int) var_9)))))))));
        var_20 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) > (((/* implicit */int) ((min((((/* implicit */int) (short)-25835)), (144605474))) == (((/* implicit */int) ((var_8) >= (var_1)))))))));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((var_8) % (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_3)))) : (max((var_5), (((/* implicit */unsigned long long int) var_3)))))))))));
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_28 [8ULL] &= ((/* implicit */unsigned int) (+(var_1)));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(var_8))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_5))))))) ? (((max((((/* implicit */unsigned long long int) var_4)), (var_5))) >> (((max((var_3), (((/* implicit */long long int) var_1)))) - (2018121630553571337LL))))) : (max(((-(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4))))))))))));
        var_23 -= ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_7)))), (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_7))))));
    }
    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_24 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) + (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        arr_31 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)167)) == (((/* implicit */int) (unsigned short)46997)))))));
    }
}
