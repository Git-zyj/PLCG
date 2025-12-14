/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174671
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))), (min((((/* implicit */short) var_9)), (arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                        }
                        arr_16 [i_0] [i_1 + 1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_2] [i_1] [i_1])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [(signed char)1] [i_1 + 1] [i_5] [i_3] [i_1 + 1] = ((/* implicit */unsigned int) (~(min((var_18), (((var_6) >> (((/* implicit */int) var_0))))))));
                            arr_20 [i_0] [i_0] [i_5] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) / (arr_8 [i_0] [i_0] [i_0])));
                            var_22 = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_23 *= ((/* implicit */short) (+((+(arr_10 [i_6] [i_3] [i_1 - 1] [i_6] [i_1])))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */short) arr_12 [i_0] [i_6]);
                        }
                    }
                    var_24 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [(_Bool)0] [i_1 - 1] [12LL] [i_2]);
                    arr_24 [3U] [i_1] [3U] = ((/* implicit */unsigned long long int) ((3977073504U) < (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_15);
    var_26 *= ((/* implicit */short) ((var_15) >> (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (unsigned char i_10 = 2; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= ((-(((/* implicit */int) (short)(-32767 - 1))))))))) : (((arr_28 [i_7] [i_8]) % (((/* implicit */long long int) ((/* implicit */int) ((var_19) != (((/* implicit */unsigned int) var_6))))))))));
                        var_29 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_35 [i_8] [i_10 + 1] [i_10 + 1] [i_10])))) ? (((((/* implicit */_Bool) arr_35 [i_8] [i_10 + 1] [i_10] [i_10])) ? (arr_35 [i_8] [i_10 - 1] [i_10 - 1] [i_10]) : (arr_35 [i_7] [i_10 + 1] [i_10] [i_10]))) : (max((((/* implicit */unsigned int) var_2)), (arr_35 [i_7] [i_10 + 1] [i_7] [i_10])))));
                    }
                } 
            } 
        } 
        arr_36 [5U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(signed char)5])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_1) ? (((/* implicit */long long int) var_19)) : (var_14)))))) ? ((((~(4640614219474559241ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_26 [6U]))))))) : (((/* implicit */unsigned long long int) (-(((long long int) arr_34 [i_7])))))));
        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned long long int) arr_31 [i_7] [i_7] [1U])) : (var_15)))) ? (((4640614219474559241ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned int) (short)-2039)) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_25 [i_7]), ((short)-32752))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32738)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
        {
            for (short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                {
                    arr_47 [i_11 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)91))))) : (max((var_17), (((/* implicit */long long int) arr_6 [2LL] [(short)11] [i_12]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_11 - 1] [i_11 - 1])) ? (var_10) : (arr_17 [i_13 + 1] [i_13 + 1] [i_12] [i_12] [i_11])))) : (arr_39 [i_12] [i_12])));
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11] [i_13 - 1] [i_13])) ? (arr_31 [i_12] [i_13 - 1] [i_13]) : (arr_31 [i_13] [i_13 - 1] [i_13 + 2]))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [0ULL] [i_12] [i_11])) + ((+(((/* implicit */int) (short)-4)))))))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))))), (((((/* implicit */_Bool) arr_37 [11] [i_12])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [4LL] [i_12] [i_12] [i_13]))))))) <= (max((((((/* implicit */_Bool) 1095187384U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (17310445386588725206ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)45))) <= (arr_10 [i_11 - 3] [i_11 - 3] [i_11] [i_11] [i_11])))))))))));
                }
            } 
        } 
    } 
}
