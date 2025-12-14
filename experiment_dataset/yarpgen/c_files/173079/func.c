/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173079
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
    var_15 = ((/* implicit */short) var_4);
    var_16 = ((/* implicit */unsigned short) (((_Bool)1) ? (((long long int) (+(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_14)) ? (var_10) : (var_10)))))));
    var_17 = ((((((-2570265605457984502LL) ^ (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_10))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (1))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [(unsigned short)13])) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= (0U)))))) > (((arr_0 [i_0]) ? (-401944269) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (-(min(((-(((/* implicit */int) arr_1 [6U])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 6U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))), (((/* implicit */long long int) ((4294967290U) - (4294967290U)))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4U)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (max((0LL), (((/* implicit */long long int) arr_0 [i_0])))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [7])))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_0] &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_11 [i_3 - 4] [i_1 + 2] [i_2] [i_1])) ? (arr_11 [i_3 - 4] [i_1 - 1] [i_2] [i_3]) : (arr_11 [i_3 - 2] [i_1 + 3] [i_3 + 2] [8])))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((4294967287U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1])))))) + (((((/* implicit */int) arr_0 [i_3 - 3])) ^ (((/* implicit */int) (_Bool)1))))));
                        arr_15 [i_0] [(unsigned short)0] [(short)3] [i_3] [i_1] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 674226328))))) * (((((/* implicit */_Bool) 4289678087693938081LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */int) min((arr_8 [i_0] [i_0] [(unsigned char)7] [(unsigned char)7]), (arr_8 [i_0] [(_Bool)1] [i_2] [9LL])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_0] [i_0])))))) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (unsigned short)8192);
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) max((6U), (((/* implicit */unsigned int) 651919998)))))), (arr_7 [7LL])));
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_4])) ? (arr_13 [i_4] [i_4] [i_4] [3U] [i_4] [i_4]) : (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)-14213)) % (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_21 [12] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5])) <= (((/* implicit */int) arr_0 [i_5]))))), (arr_12 [i_5] [i_5]))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) == (4294967290U))) ? ((-(4294967290U))) : (((/* implicit */unsigned int) 111484394)))))));
        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) << (((arr_7 [i_5]) - (7155499098587511285LL))))))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))))), (max((1473277926087339761ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [4U]))))) | (((((/* implicit */long long int) 11U)) - (arr_5 [i_6] [(unsigned char)1]))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16973466147622211873ULL)) ? (((/* implicit */unsigned long long int) arr_24 [i_6] [(_Bool)1])) : (arr_23 [i_5] [i_6]))))))) << (((max((((/* implicit */unsigned long long int) arr_7 [i_5])), (min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5])), (arr_23 [8] [i_6]))))) - (7155499098587511302ULL))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_27 += ((/* implicit */_Bool) 1855670726957006480LL);
            var_28 = ((/* implicit */_Bool) var_10);
        }
        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [5])) ? (((((/* implicit */int) ((unsigned char) (_Bool)1))) & (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))) : ((~(((/* implicit */int) (short)9765))))));
            var_30 = ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_29 [i_5])), (arr_10 [i_8] [4LL] [i_8] [i_8])))) ? (((var_1) ? (((/* implicit */int) arr_9 [i_5] [2LL] [(_Bool)1] [(short)7])) : (((/* implicit */int) (unsigned short)18420)))) : (((/* implicit */int) (!((_Bool)0))))))));
        }
    }
}
