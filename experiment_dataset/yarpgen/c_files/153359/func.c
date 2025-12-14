/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153359
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (_Bool)0)) : ((-(arr_6 [i_0] [i_1])))))) && (((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_6) : (((/* implicit */long long int) var_16))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) 1477288380)) || (((/* implicit */_Bool) ((unsigned long long int) (signed char)64))));
                        var_21 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0 + 2])) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_0 + 1])))));
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_2] [i_0] = min((((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (unsigned short)21717)) : (var_15))), (((/* implicit */int) (signed char)120)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_4])) ? (((((/* implicit */_Bool) 4294967295U)) ? (6917529027641081856LL) : (((/* implicit */long long int) (~(var_4)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_1] [i_4 + 1])) : (((/* implicit */int) (signed char)64)))))))));
                            var_23 = ((((/* implicit */_Bool) ((var_8) & (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4294967287U))))) : (((int) ((((/* implicit */_Bool) (unsigned short)28596)) ? (arr_5 [(_Bool)1]) : (arr_5 [i_3])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)31907))) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            var_25 = ((/* implicit */long long int) (unsigned char)164);
                            var_26 -= (-(((/* implicit */int) (unsigned char)91)));
                        }
                        arr_19 [i_3] [i_1] = ((/* implicit */signed char) (+(18446744073709551615ULL)));
                    }
                } 
            } 
            arr_20 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) var_18)))) - (((((((/* implicit */int) var_18)) + (((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (short)4253))))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((((var_5) && (((/* implicit */_Bool) var_18)))) || (((/* implicit */_Bool) var_1)))))))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 23; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_28 += ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                        var_29 = ((((/* implicit */_Bool) (short)-26349)) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (var_6))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28620)))))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 1; i_8 < 22; i_8 += 1) 
        {
            arr_29 [(unsigned char)10] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_9)))) >> (((/* implicit */int) (_Bool)1))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((int) var_13))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14623))) : (2147467264U))))))));
        }
        var_31 = ((/* implicit */short) (+(var_15)));
    }
    for (short i_9 = 4; i_9 < 15; i_9 += 3) 
    {
        arr_32 [i_9] [i_9] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_3)));
        arr_33 [i_9] = ((/* implicit */unsigned long long int) var_18);
    }
    var_32 = ((/* implicit */unsigned long long int) var_2);
}
