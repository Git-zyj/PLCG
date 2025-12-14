/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165734
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-4693568719793597316LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) var_0))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-24186)))))) ? ((-(var_9))) : (((/* implicit */int) ((arr_6 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))));
            arr_9 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1784706479)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_1]))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)27956)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_17 [i_0] [i_2] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) && (((/* implicit */_Bool) arr_10 [i_3] [i_0]))));
                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)37593)) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_3]))));
            }
            for (int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                arr_21 [i_4] [i_2] [i_0] [i_2] = ((/* implicit */int) var_17);
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)37578)) ? (arr_6 [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27972))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 1] [i_4]))))))));
            }
            for (short i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                var_23 = (((-(4100459649U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned short)37586))))));
                arr_24 [i_5] [i_5] [i_0] = ((/* implicit */short) (~(((((var_6) + (2147483647))) << (((((/* implicit */int) (unsigned char)188)) - (188)))))));
                arr_25 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)0)) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)3)) == (((/* implicit */int) (unsigned short)37580)))))) : (arr_23 [i_0] [i_2] [i_2])));
            }
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_29 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 788305434U)) ? (3091675657U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))));
                arr_30 [i_6] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 788305448U)) ? (((/* implicit */int) arr_2 [i_0] [i_6])) : (((/* implicit */int) arr_2 [i_0] [i_6]))));
            }
            for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) arr_33 [i_0] [i_2] [i_0]))));
                arr_34 [i_7] [i_2] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 - 2]));
                var_25 = ((/* implicit */_Bool) ((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
                var_26 = ((/* implicit */short) (-(((unsigned int) arr_27 [i_7] [i_2] [i_0]))));
            }
            arr_35 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)37590))));
        }
        for (short i_8 = 2; i_8 < 20; i_8 += 2) 
        {
            arr_39 [i_8] [i_0] = (!(((/* implicit */_Bool) arr_33 [i_8 + 1] [i_8 + 1] [i_8])));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_8 + 1] [i_8 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_8] [i_0])) || (((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) (signed char)50)))))));
        }
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) + (((/* implicit */int) (_Bool)0))));
        var_29 = ((/* implicit */unsigned char) arr_28 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        var_30 = -4500402287468012993LL;
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9])) <= (((((/* implicit */int) (unsigned char)184)) & (((/* implicit */int) (_Bool)1)))))))) : (arr_23 [i_9] [i_9] [i_9])));
    }
    var_32 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3ULL)) ? (min((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned short)27978)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-13)) | (((/* implicit */int) (unsigned short)0))))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_6)) : (4175716412U))))))));
}
