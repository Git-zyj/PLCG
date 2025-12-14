/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172536
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [4ULL] [4ULL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)0] [i_2]))))) : (((((/* implicit */_Bool) (short)-29060)) ? (arr_5 [(signed char)6] [(signed char)14]) : (arr_5 [(short)2] [(short)2]))))))));
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 15077798917545155700ULL))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)55)) || (((/* implicit */_Bool) arr_6 [(unsigned char)8] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) (~((((!(((/* implicit */_Bool) arr_3 [i_3])))) ? (((var_2) % (((/* implicit */unsigned long long int) arr_5 [i_0] [(short)9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) >= (16788905164336104390ULL)))))))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(26ULL))), (((/* implicit */unsigned long long int) (unsigned char)82))))) ? (((((((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3 + 1] [14LL])) + (4795))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [8LL] [i_2] [(unsigned short)22]))) : (arr_3 [i_0])))) ? ((+(((/* implicit */int) (short)-25492)))) : (((/* implicit */int) arr_11 [(short)10] [i_3 + 2] [i_4] [i_1] [14U])))))))));
                                var_14 += ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (short)-8)))))))) % (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_14 [(short)2]))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) min((18ULL), (((/* implicit */unsigned long long int) arr_5 [i_7] [(unsigned short)14])))))) != (((/* implicit */int) arr_4 [i_5])))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_1 [i_5])), (var_8)))))) ? (((/* implicit */int) arr_21 [i_5] [i_7] [(unsigned char)18] [i_5])) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_9])))))))))));
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) min((4336404398204898570LL), (((/* implicit */long long int) 4294967273U))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)121)) << (((max((((/* implicit */unsigned long long int) arr_0 [i_7])), (arr_10 [i_6] [i_6] [10ULL] [i_7] [i_6]))) - (18446744073709551476ULL)))))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [i_5] [i_6]))) : (((((/* implicit */_Bool) arr_17 [i_6] [i_9])) ? (arr_3 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_7] [i_6] [i_6] [i_5])) ? (((((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [(short)7] [i_7])) / (((/* implicit */int) var_6)))) : (((/* implicit */int) max((arr_21 [i_5] [i_7] [8U] [i_5]), (((/* implicit */unsigned short) (short)31674)))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_7])))) : (arr_3 [3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)169)) || (((/* implicit */_Bool) 3116351895982219811LL))))))))));
                }
            } 
        } 
    } 
}
