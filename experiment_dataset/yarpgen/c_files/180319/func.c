/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180319
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] = max((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 3])) > (((/* implicit */int) arr_0 [i_1 + 1] [i_1]))))), (arr_0 [i_1 - 3] [i_1]));
            var_10 &= (!(((/* implicit */_Bool) (unsigned short)22925)));
            arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15247)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0])))))), (((((/* implicit */unsigned long long int) var_7)) / (10612043263746760779ULL)))))) || (((/* implicit */_Bool) (unsigned char)31))));
        }
        var_11 ^= ((/* implicit */int) arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1744112324108576556LL)) ? (arr_11 [2ULL] [2ULL]) : (((/* implicit */int) (signed char)-1))))))))) * (min((((((/* implicit */_Bool) (unsigned short)15254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (-4619050539141497083LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned short)65535)))))))))));
                        var_13 &= ((/* implicit */unsigned char) var_0);
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (~(arr_13 [i_4]))))));
                        arr_18 [i_2] [i_3] [i_2] [i_3] = (unsigned char)255;
                    }
                    var_15 = ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned short)38010)) : (((/* implicit */int) (signed char)119))))))) == (max((((/* implicit */long long int) arr_10 [i_2])), (min((((/* implicit */long long int) var_9)), (var_0))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) (unsigned short)1))));
}
