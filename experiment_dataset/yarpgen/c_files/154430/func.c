/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154430
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
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (var_3)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 2] [(_Bool)1] [(_Bool)1] [i_3] [i_3])) ? (arr_7 [14LL] [14LL] [i_2 - 2] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((signed char) arr_7 [(signed char)6] [i_2 + 1] [i_1] [(signed char)6])))));
                        var_15 &= ((/* implicit */unsigned short) ((_Bool) -9223372036854775785LL));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */int) ((_Bool) arr_10 [i_4] [i_4]));
            var_16 &= ((/* implicit */long long int) arr_8 [(signed char)10]);
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] = ((/* implicit */long long int) (unsigned char)219);
                            var_17 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
            } 
            arr_28 [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_21 [i_0] [i_0]));
        }
    }
    for (int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 12; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)219)) & (((/* implicit */int) ((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (signed char)-94)))) && (((/* implicit */_Bool) (~(var_5))))))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_9] [i_9])) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12 + 2] [i_10 + 4]))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_10 + 2] [i_10 + 2] [i_9] [i_12])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_10] [i_10 + 4] [i_10] [i_10 + 4] [i_10]))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) var_10)))) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8688)))))));
    }
    var_21 = ((/* implicit */long long int) var_8);
}
