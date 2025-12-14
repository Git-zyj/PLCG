/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149434
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
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((+(7628011033702501161ULL))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1920)) ? (var_6) : (((/* implicit */unsigned int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (-2075912627))) > (arr_0 [i_0 + 1])));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0 - 1]);
            arr_8 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_11 [i_0 - 1] [(_Bool)1] [i_2 - 1] [i_2]))))) ? ((-(1172323898))) : (((/* implicit */int) (!(arr_11 [i_0 - 1] [i_2] [i_0 - 1] [i_2]))))));
                        var_21 = ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -2075912627))))) ^ ((~(2075912627)))));
                        var_22 = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [(unsigned char)15]))), (((/* implicit */unsigned long long int) (unsigned char)20))))));
                        var_23 -= (short)-3153;
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) max((arr_0 [i_4 + 2]), (-1172323871)));
            arr_17 [21] |= ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)0)), (arr_4 [16U])));
            var_24 = ((/* implicit */unsigned int) ((short) arr_12 [i_0] [(unsigned char)9] [(unsigned char)9] [i_4]));
            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1])) != (((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1])))))));
        }
        for (int i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            arr_20 [i_0] [i_5] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-1172323898), (arr_4 [i_0])))) ? (((arr_1 [(short)6] [(unsigned char)13]) ? (arr_12 [8] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26314))))) : (((/* implicit */unsigned int) -1172323873))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_5]))) % (4838804955457496951ULL))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) -1172323871)) : (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((int) arr_9 [i_0] [i_0] [i_0] [i_5]))))))))));
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 3; i_9 < 19; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_30 [i_0] [i_6] [i_7] [i_8] [i_0])))));
                            var_28 = arr_11 [(short)9] [i_7] [i_7] [i_9];
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_34 [i_6] [i_8] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)21759), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_29 |= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_19 [i_0 + 1] [(_Bool)1] [i_7])) ? (arr_21 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_29 [i_0] [8] [i_7] [i_8] [i_10])))));
                        }
                        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) 2146435072);
                            var_31 = ((/* implicit */unsigned int) (~(((int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        }
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_23 [i_8] [i_6] [2U]) ^ (((/* implicit */unsigned long long int) 4126423945U))))) ? (((/* implicit */int) (unsigned char)43)) : (1895338222)))) : (((arr_24 [i_0 + 1]) - (arr_24 [i_0 + 1])))));
                        arr_37 [i_0] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (+((-(arr_30 [i_0] [i_6] [i_0 - 1] [4U] [i_8 + 1])))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1172323870)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3188846017U)))) || (((/* implicit */_Bool) 2113124134U)))) ? ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30035))) : (var_6))) / (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) 11483887320118224747ULL))))))));
        }
        var_34 = ((/* implicit */int) (short)-22604);
        var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(unsigned short)13] [i_0 - 1] [i_0 + 1] [18U])) ? (arr_12 [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_12 [i_0] [i_0 - 1] [i_0] [3U])))), (((unsigned long long int) arr_32 [i_0] [i_0 - 1] [20ULL] [0ULL] [i_0]))));
    }
}
