/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16434
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_18 -= ((/* implicit */unsigned char) var_12);
            var_19 = ((/* implicit */unsigned long long int) ((((arr_4 [12ULL] [i_0] [i_0]) == (((/* implicit */unsigned int) var_16)))) ? (((arr_2 [i_1 + 2]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((unsigned int) (signed char)-4)))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) arr_0 [i_2]);
            var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
        }
        var_22 += ((/* implicit */short) (((-(((/* implicit */int) var_1)))) > ((~(((/* implicit */int) arr_2 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) (unsigned short)65535)))));
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(var_16))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_25 = ((/* implicit */long long int) (unsigned char)108);
                        var_26 = ((/* implicit */unsigned char) var_15);
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))) : (((/* implicit */int) var_3))));
                        arr_19 [i_3] = ((/* implicit */int) (unsigned char)156);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_11 [i_6] [22ULL] [i_6]))));
                    }
                } 
            } 
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 4; i_8 < 20; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_11)))))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) / (arr_21 [i_3] [i_8 + 3] [i_3])));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) var_11);
        }
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -858687030))));
            var_33 = ((/* implicit */signed char) (((!(arr_14 [i_10 + 2] [i_10] [i_10 + 2] [4LL]))) ? (((/* implicit */int) arr_22 [i_3] [i_10 - 1])) : (((/* implicit */int) var_9))));
            arr_30 [i_3] [i_3] [i_10] = ((/* implicit */unsigned short) ((int) var_11));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 3; i_11 < 15; i_11 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_31 [i_11 + 2])) ^ (var_15)));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            var_35 |= ((((/* implicit */_Bool) (short)-13480)) ? (2684821338U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13479))));
            var_36 = ((/* implicit */_Bool) var_14);
        }
    }
    var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_16)))) ? (((/* implicit */int) ((7032368452487211693LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-27)))))) : (((/* implicit */int) var_6))))) : (var_7)));
}
