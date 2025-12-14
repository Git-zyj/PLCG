/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177
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
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_3))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2251946844U)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (signed char)58))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    var_12 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) var_8);
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) ^ (arr_4 [11U])))) && (((/* implicit */_Bool) arr_1 [i_0]))));
            var_15 = ((short) var_1);
        }
        var_16 = ((arr_5 [(unsigned short)17] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_10);
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) != (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (var_1)))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_5 [(unsigned short)6] [i_2] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_20 ^= min((((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_0)) < (((/* implicit */int) (signed char)36))))))), (min((var_1), (((/* implicit */unsigned long long int) var_5)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_4)) | (arr_4 [i_4])));
            var_22 = ((/* implicit */signed char) var_1);
        }
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */int) (short)-13130);
            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17473)) || (((/* implicit */_Bool) arr_13 [i_6 - 2] [i_6 + 1]))));
            arr_18 [12ULL] [12ULL] &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 1064421036)) : (var_6));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */int) var_1);
                arr_22 [i_4] [i_6] [(unsigned char)13] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (var_4)))) <= (arr_10 [i_7])));
                var_26 = ((/* implicit */short) (signed char)58);
                var_27 = ((/* implicit */unsigned char) var_10);
            }
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */int) (((_Bool)0) ? (2935462760U) : (((/* implicit */unsigned int) 1152725347))));
                var_29 = ((/* implicit */int) arr_8 [i_4]);
                var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)37554))));
                var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (4899733869392626320LL)));
            }
            var_32 = ((/* implicit */unsigned char) arr_16 [i_4] [i_6 - 2] [i_4]);
        }
        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 3) /* same iter space */
        {
            arr_29 [i_9 - 3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned short)37554)))))) <= (((((1448227864) >> (((((/* implicit */int) (short)-19312)) + (19342))))) + (((/* implicit */int) min((arr_9 [i_4] [i_9] [i_9 - 3]), (arr_17 [i_4] [(signed char)12]))))))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 17; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 17; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_33 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_4])))) : (((var_8) << (((/* implicit */int) (unsigned short)24)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11 - 3] [i_10] [i_4]))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((arr_8 [i_12]) && (((/* implicit */_Bool) var_7)))))) << (((max((var_9), (var_9))) - (var_9)))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) min((((/* implicit */unsigned int) min((((int) var_2)), (((/* implicit */int) (signed char)82))))), (var_2))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65519)), (min((((/* implicit */unsigned int) var_0)), (var_2)))))) ? (((((/* implicit */int) (unsigned short)16)) >> (((/* implicit */int) (_Bool)0)))) : (2147483621)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            var_37 = ((/* implicit */_Bool) ((17600023126224080446ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_38 = ((/* implicit */short) ((signed char) var_0));
        }
    }
}
