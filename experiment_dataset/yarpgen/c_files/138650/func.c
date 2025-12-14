/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138650
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)209)), (4294967295U))), (((/* implicit */unsigned int) var_16))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32756))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_6)) : (14ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_5 [i_0] [i_1 + 2]))))));
                        var_21 = ((max((((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) 18U)) : (15115486735953690115ULL))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 3])))) <= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1U)) ? (arr_0 [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (var_2))));
                        var_22 = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)34169)) ^ ((~(((/* implicit */int) (unsigned short)27234)))))), (arr_6 [(short)18] [i_1 - 3] [i_2] [i_3])));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_18);
                    }
                } 
            } 
        } 
        var_23 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (arr_8 [(signed char)1] [(signed char)1] [i_0] [i_0]))) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((short) arr_17 [i_5]));
                    arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(arr_6 [i_4] [i_5] [i_4] [i_6])))) ? (max((3331257337755861500ULL), (((/* implicit */unsigned long long int) var_4)))) : (((15115486735953690115ULL) | (var_15))))), (((/* implicit */unsigned long long int) (short)20421))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_2 [i_4] [i_7] [i_4]))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            var_26 *= ((/* implicit */unsigned short) min((15115486735953690115ULL), (((/* implicit */unsigned long long int) (unsigned char)4))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (var_9)));
                            var_28 = ((/* implicit */unsigned char) (-(min((arr_8 [i_4] [i_7] [i_8] [i_9]), (arr_8 [i_7] [i_7] [i_8] [i_9])))));
                            arr_29 [i_7] [i_7] = ((/* implicit */int) var_4);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (unsigned char)4)))) ? (((((/* implicit */_Bool) 2032593609)) ? (-2147483616) : (((/* implicit */int) arr_2 [i_4] [i_4] [i_10])))) : ((-(((/* implicit */int) arr_5 [i_10] [i_10]))))))) ? (((/* implicit */unsigned int) arr_1 [i_8])) : (min((arr_8 [i_10] [i_9] [i_7] [(unsigned char)3]), (arr_8 [i_7] [i_8] [i_9] [i_10])))));
                        }
                        arr_30 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_4] [(_Bool)1] [i_9])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) var_8))))))), (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_26 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (-(2032593609))))))));
                    }
                    var_30 = ((/* implicit */unsigned int) max((var_30), (32U)));
                }
            } 
        } 
        var_31 = ((/* implicit */int) min((var_31), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -3343814505603750558LL)))))))));
    }
}
