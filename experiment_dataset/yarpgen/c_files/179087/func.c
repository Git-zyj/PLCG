/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179087
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
    var_11 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))))))), (((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */unsigned long long int) var_0)) + (4033540753308913860ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)203)))))))));
        var_13 = min((((/* implicit */unsigned long long int) min((min((arr_0 [(_Bool)1]), ((signed char)109))), (((/* implicit */signed char) arr_2 [i_0]))))), (((((unsigned long long int) arr_1 [i_0])) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) > (var_7))))))));
        var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) (unsigned char)36)))) : ((-(((/* implicit */int) arr_0 [10U])))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) arr_2 [i_1]);
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) (_Bool)0);
            arr_11 [i_1] [i_2] &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) (unsigned char)76)))) | (((/* implicit */int) ((_Bool) var_6)))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_1 [i_1]) : (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */signed char) arr_9 [i_2]);
                        arr_18 [i_1] [12LL] [i_3] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) min(((~(arr_8 [i_3] [i_2] [i_1]))), (((arr_8 [i_2] [i_3] [i_4]) ^ (arr_8 [i_1] [i_2] [i_3])))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5] [i_7] [i_8]))) & (min((((/* implicit */unsigned long long int) (unsigned short)41256)), (17977674139393571515ULL))))) | (((/* implicit */unsigned long long int) var_5))));
                            var_17 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49633))) : (var_3)))) ? (((/* implicit */unsigned int) min((var_0), (var_0)))) : (arr_8 [i_7] [i_5 + 3] [i_5 + 3]))));
                            var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)111)) == (((/* implicit */int) (unsigned short)3)))))) : (arr_12 [i_5] [i_5 + 1]))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_5 + 1])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            arr_31 [i_1] [i_5] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1761939462))));
                            arr_32 [i_1] [(signed char)5] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_5 + 1])) && (((/* implicit */_Bool) 2066943307U))));
                        }
                        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_1] [i_5 - 1] [i_6] [i_7] [i_7]))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)39)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-3318)) : (((/* implicit */int) (unsigned short)2))))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_5 + 2] [4ULL] [i_5 + 3] [i_5 + 2]), (((/* implicit */unsigned char) min(((signed char)85), (((/* implicit */signed char) (_Bool)1)))))))))));
                        var_20 *= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)32536)), ((+(((/* implicit */int) arr_22 [i_1] [i_5 + 3] [i_1] [i_7]))))));
                    }
                } 
            } 
            var_21 &= ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -1023157330))))))));
        }
        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) 
        {
            var_22 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)72))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (min((((/* implicit */unsigned short) (unsigned char)214)), (((unsigned short) var_6))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -9187559266772627322LL)) && (((/* implicit */_Bool) arr_17 [i_1] [i_10] [i_11] [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(15492751102679879720ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_11] [i_12])) ? (((((/* implicit */int) (signed char)112)) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [(short)8]))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_4 [i_10 + 3])))) ? (arr_12 [i_1] [i_10 - 1]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (var_0))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) (signed char)124);
            var_26 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_13 [i_1] [0LL] [i_1] [0LL])) ? (((/* implicit */unsigned long long int) var_0)) : (((13156259787013488225ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228)))))))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (4294967293U)))))));
            arr_43 [i_13] = ((/* implicit */signed char) arr_2 [i_1]);
        }
        var_28 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4294967288U)))) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1])) : (min((1761939465), (((/* implicit */int) (_Bool)1))))))), ((+(((((/* implicit */_Bool) var_5)) ? (var_3) : (arr_33 [i_1] [i_1] [i_1])))))));
    }
    var_29 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) var_5)) != (4294967293U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) <= (min((var_6), (((/* implicit */unsigned long long int) var_0)))))))) : (((((/* implicit */_Bool) ((unsigned short) (signed char)60))) ? (((((/* implicit */_Bool) var_8)) ? (6413237905478934901LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (-(var_0))))))));
    var_30 = ((/* implicit */unsigned long long int) var_4);
}
