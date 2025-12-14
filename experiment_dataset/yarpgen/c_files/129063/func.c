/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129063
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned char) 7029332167498046410LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) min((((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1])));
        var_19 = ((/* implicit */long long int) ((_Bool) var_2));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 7029332167498046410LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22299))) : (7029332167498046410LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)58623))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) : (3716384966U)))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */int) (short)22299)) <= ((((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((arr_7 [i_2]) + (1881235313))) - (13))))) << (((((/* implicit */int) var_1)) - (196))))))))));
        arr_8 [i_2] = ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_5)));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            var_22 *= ((/* implicit */unsigned long long int) ((signed char) max((arr_7 [i_2]), (((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) var_8))))))));
            var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (short)-8543)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_24 += ((/* implicit */short) arr_18 [i_4] [i_3 - 1] [i_4] [i_4] [i_6] [i_2]);
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3] [i_2] [i_5] [i_6])) ? (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-18338)) : (((/* implicit */int) var_9))))));
                            var_25 &= ((/* implicit */_Bool) ((short) ((arr_9 [(unsigned short)4] [i_4] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_2]))))));
                        }
                    } 
                } 
                arr_21 [i_2] [i_3 - 1] [i_4] |= ((/* implicit */short) ((unsigned char) arr_9 [i_3] [i_3] [i_3 - 3]));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (2538534483U)))))));
            }
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_27 = arr_17 [i_7] [i_7] [i_3] [i_3 - 2] [i_2] [i_2] [i_2];
                var_28 ^= ((/* implicit */unsigned char) max((((arr_14 [i_2] [i_2] [i_2] [i_7]) << (((((long long int) (unsigned short)58623)) - (58623LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) max((((/* implicit */short) arr_10 [i_2])), (var_13)))) : (((/* implicit */int) arr_15 [i_2] [i_3] [i_2])))))));
            }
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2] [i_3 - 1] [i_8] [i_2] [i_8])) ? ((~(-2379954863333398402LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_8] [i_3 + 1] [i_2]) < (((/* implicit */unsigned long long int) arr_16 [i_3] [i_2] [i_3] [i_2] [i_2]))))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-877107226107531493LL)))) ? (4130702370U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16931))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) & (((3247011723U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                var_31 = ((/* implicit */unsigned short) 717723109851825271LL);
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_2])) << (((((/* implicit */int) var_13)) + (1060)))))) ? (arr_7 [i_3]) : (((/* implicit */int) var_0))))))));
            }
        }
        arr_27 [i_2] [i_2] = ((/* implicit */long long int) arr_7 [i_2]);
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (((((/* implicit */int) ((unsigned char) var_0))) << (((max((var_6), (((/* implicit */unsigned long long int) var_4)))) - (18446744073709551544ULL))))) : (((/* implicit */int) var_13))));
}
