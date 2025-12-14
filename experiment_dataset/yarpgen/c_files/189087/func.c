/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189087
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
    var_20 = ((/* implicit */unsigned short) (short)(-32767 - 1));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? ((-(((((/* implicit */int) (unsigned char)155)) + (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) / (arr_0 [i_1] [i_0])))) ? ((+(((/* implicit */int) (signed char)-72)))) : (((((/* implicit */int) var_2)) + (arr_3 [i_1])))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) arr_3 [i_1])) : (2179734501U)))), (max((((/* implicit */long long int) (unsigned short)62659)), (9007182074871808LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-72)))) : ((+(2205555681732678656LL))));
                var_22 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)65535)), ((-(((arr_4 [i_0] [i_0] [i_0]) ? (-2205555681732678657LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                arr_6 [i_0] |= var_9;
            }
        } 
    } 
    var_23 = ((/* implicit */short) (-(min((((((/* implicit */int) var_13)) & (((/* implicit */int) (unsigned short)34902)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)32758)) : (var_18)))))));
    var_24 = ((signed char) (short)-32766);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_19 [i_2] [(unsigned char)7] [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */_Bool) max((arr_21 [i_2] [(unsigned char)7] [i_4] [i_5] [(short)5]), (arr_0 [(unsigned short)9] [1U])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (-1)))) : ((+(3704422440345580038ULL)))))));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [(signed char)3] = ((/* implicit */unsigned char) ((arr_21 [i_2] [i_2] [i_2] [i_5] [i_6]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                                var_26 += ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_12)) * (((arr_21 [9] [i_3] [i_3] [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))))), (((/* implicit */unsigned long long int) arr_13 [i_6] [i_6]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    arr_26 [i_7] = ((signed char) (unsigned short)17475);
                    arr_27 [i_2] [i_2] [i_3] [i_7] = ((((/* implicit */int) (signed char)72)) != (((/* implicit */int) (unsigned char)37)));
                    arr_28 [i_2] [i_7] [i_7] = ((/* implicit */int) ((_Bool) min((arr_20 [(unsigned short)5] [i_3] [i_3] [i_7] [i_7]), (((/* implicit */short) (unsigned char)84)))));
                }
            }
        } 
    } 
}
