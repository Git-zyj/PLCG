/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106615
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
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)19557))));
    var_19 = ((/* implicit */long long int) var_5);
    var_20 = ((/* implicit */long long int) ((unsigned char) var_2));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-19537)) / (((/* implicit */int) (short)14)))) * (((/* implicit */int) var_5)))) == (((/* implicit */int) (short)-14))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            arr_14 [i_1] = ((/* implicit */long long int) var_3);
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_14))));
                        }
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))), (((var_16) ? (((/* implicit */long long int) arr_1 [i_3])) : (var_17)))))) || (((/* implicit */_Bool) ((arr_3 [i_0 - 3] [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : ((-(567819429U)))))))))));
                        arr_15 [i_1] [i_1] = (((-((-(((/* implicit */int) var_5)))))) | (((/* implicit */int) ((short) (short)-16994))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((/* implicit */int) var_15)) - (1986)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_2] [i_2])))))) : (var_9))) < (((/* implicit */long long int) 3837305917U)))))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 761735782U)) ? (var_9) : (((/* implicit */long long int) -483693650)))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62501))))))))) ? (((/* implicit */int) (short)9448)) : (((/* implicit */int) (_Bool)1))));
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (min((var_9), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)108)) || (((/* implicit */_Bool) (unsigned short)48595)))))))) & (((/* implicit */long long int) arr_2 [i_0]))));
                        arr_20 [i_1] [i_2] [i_1] [i_0] [i_1] = ((((/* implicit */long long int) var_7)) - (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-123))))) ? (max((((/* implicit */long long int) (_Bool)0)), (var_9))) : (((/* implicit */long long int) (~(3639881169U)))))));
                        var_24 += ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)116)))) >= (var_3)))), (((((/* implicit */_Bool) 4ULL)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 3])))));
                    }
                    arr_21 [(short)4] [i_1] [(short)4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 4] [i_0] [i_0 - 2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0 - 2])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            {
                var_25 &= ((/* implicit */_Bool) var_2);
                arr_27 [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (2147483646) : ((~(((/* implicit */int) var_4)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_6] [i_6] [i_6])) * (((/* implicit */int) arr_25 [i_6] [i_7] [(unsigned short)0]))));
                    var_27 = ((/* implicit */short) arr_28 [i_6] [i_6] [i_6] [i_6]);
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-19565)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11767))) : (14ULL))))))));
                }
                for (long long int i_9 = 2; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    arr_33 [i_6] = ((/* implicit */unsigned char) ((arr_28 [i_6] [i_6] [i_6] [i_6]) - (((/* implicit */long long int) ((((/* implicit */_Bool) 9409773283285686277ULL)) ? (((/* implicit */int) arr_24 [i_9 - 2] [i_9 - 2] [i_9 + 2])) : (((/* implicit */int) arr_24 [i_9 - 1] [i_9 + 2] [i_9 - 2])))))));
                    var_29 = ((/* implicit */_Bool) -8503375886511427474LL);
                }
                var_30 = ((/* implicit */short) (-(max((((unsigned int) 0U)), (((/* implicit */unsigned int) (_Bool)1))))));
            }
        } 
    } 
}
