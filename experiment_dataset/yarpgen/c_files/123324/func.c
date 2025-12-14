/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123324
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
    var_19 = ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21360)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_3 [(_Bool)1] [(_Bool)1] [i_2]) ? (4209879827U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)2] [i_1] [i_2] [(unsigned char)9])))))) ^ (max((((/* implicit */unsigned long long int) 85087469U)), (var_0))))))));
                    var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [7ULL] [i_2]))) : (var_13))) >> ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [16U] [i_2]))) : (var_5))))) < (4209879818U)));
                    var_22 = ((65535U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1464668747U)))) ? (min((4294967295U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) (((~(601279320))) & ((+(((/* implicit */int) var_16))))))) : (((((/* implicit */_Bool) (~(0U)))) ? (((((/* implicit */_Bool) var_10)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3])) & (((/* implicit */int) (unsigned short)37263)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_3] [i_3] [i_3])))))));
        arr_8 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_3])) + (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (_Bool)1))))), (18446744073709551608ULL)));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) (signed char)-83))))) & (var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_3] [i_3] [i_3]))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_26 ^= ((/* implicit */unsigned long long int) arr_10 [(unsigned short)6] [(unsigned short)6]);
        var_27 -= 85087466U;
        var_28 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_4])) || (((/* implicit */_Bool) 4209879827U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)57734)))) : (min((arr_4 [i_4]), (arr_4 [i_4])))));
        var_29 = ((/* implicit */signed char) (-((-(-5677457090309721999LL)))));
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 6U)), (var_10)));
    }
}
