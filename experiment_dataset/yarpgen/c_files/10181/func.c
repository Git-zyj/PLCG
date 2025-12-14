/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10181
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
    var_11 &= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)31)) < ((~(((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_0] [i_2]))))));
                    var_12 = ((/* implicit */signed char) ((unsigned char) (+(arr_1 [i_1]))));
                    var_13 = ((/* implicit */unsigned long long int) var_4);
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) 1144267852U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32))))))), ((~(arr_4 [(unsigned char)3] [i_1] [i_1] [i_1])))));
                    var_15 = ((/* implicit */unsigned char) (+(max((var_0), (((/* implicit */long long int) var_8))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        var_16 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_3])))) : ((+(((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned char) (!(var_1))))))) ? (((/* implicit */int) max(((short)48), ((short)12288)))) : (((/* implicit */int) (unsigned short)32768))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_12 [(unsigned short)23] [i_4] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) (-(((/* implicit */int) var_4))))));
        arr_13 [i_4] [i_4] = var_4;
        /* LoopSeq 3 */
        for (unsigned int i_5 = 2; i_5 < 24; i_5 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)18))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (max((((/* implicit */unsigned int) var_3)), (3150699444U)))))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((arr_14 [i_4] [i_4] [i_4]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                arr_22 [(signed char)8] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 4010068583260823972LL)) ? (1144267852U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18)))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (unsigned short)53948)))), ((!(((/* implicit */_Bool) (short)-13))))))), (max((arr_14 [(signed char)4] [i_6] [i_6]), (((/* implicit */unsigned int) arr_18 [i_6]))))));
                var_20 -= ((/* implicit */long long int) max(((+((+(((/* implicit */int) (unsigned short)32599)))))), ((-(((/* implicit */int) var_3))))));
                var_21 = ((/* implicit */unsigned short) max((max(((short)31), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) var_3))))))), ((short)18)));
                var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (7745481829645631992ULL)))))))) > ((-(7745481829645631968ULL)))));
            }
            for (long long int i_8 = 4; i_8 < 23; i_8 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) -1827812534);
                var_24 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((arr_19 [i_6]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)2678))))))) + (10701262244063919623ULL)));
                arr_25 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)11))))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_1)))) : (((int) 4294967295U))));
                var_25 = ((/* implicit */signed char) min((min((((/* implicit */int) (signed char)14)), (15))), (((/* implicit */int) (unsigned short)3268))));
            }
            arr_26 [(short)2] = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
            var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16566))))), ((+(min((((/* implicit */long long int) var_7)), (arr_10 [i_4] [i_4])))))));
            arr_27 [i_4] [i_6] = ((/* implicit */int) min((min((var_5), (((/* implicit */unsigned char) var_8)))), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_20 [i_4] [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
            var_27 *= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_4])))));
        }
        for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (signed char)78))))), (((((/* implicit */_Bool) arr_24 [i_4] [1] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))) ^ (-7825522011581333975LL)));
            arr_32 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_29 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_16 [i_4] [23U] [23U])), (((/* implicit */unsigned long long int) min((3119881363U), (((/* implicit */unsigned int) arr_18 [i_4])))))));
    }
}
