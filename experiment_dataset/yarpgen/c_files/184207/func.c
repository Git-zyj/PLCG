/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184207
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) var_6);
        var_17 = ((/* implicit */unsigned int) var_9);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) % (((arr_4 [10ULL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) arr_4 [4U]))))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_1 [i_1] [i_2 - 1])))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((16777215), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-40)))))))) ? (((/* implicit */int) min((arr_11 [i_2 + 1] [i_2 + 1] [i_2 - 1]), (arr_11 [i_2 + 1] [i_2 - 1] [i_3])))) : (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(arr_13 [i_4] [i_3] [i_2] [i_1] [10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_10 [i_1] [i_1] [i_1]))))) : (max((569138390U), (((/* implicit */unsigned int) arr_9 [i_4] [i_3] [i_2 + 1] [i_1])))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_8)))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (+(((((arr_15 [i_1] [i_5] [i_6]) + (2147483647))) >> (((/* implicit */int) arr_17 [i_1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */short) ((((1340266983) + ((-2147483647 - 1)))) < ((~(((/* implicit */int) var_4))))));
                            var_24 -= ((/* implicit */unsigned short) (+(var_10)));
                            var_25 = ((/* implicit */signed char) ((arr_10 [i_5] [i_6] [i_8]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_26 = ((/* implicit */unsigned long long int) arr_6 [(unsigned short)3] [i_5] [i_7]);
                        }
                        for (int i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            var_27 -= ((/* implicit */int) (unsigned short)38214);
                            var_28 = ((/* implicit */long long int) (signed char)-40);
                        }
                        var_29 = ((/* implicit */long long int) (~(3725828906U)));
                        var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4142508053U) : (arr_24 [i_1] [i_1] [i_5] [i_6] [i_5] [i_1] [i_5])));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) < (154834902257859814ULL))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */short) arr_2 [(signed char)7] [i_1]);
            arr_28 [i_1] [i_1] = ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_1])));
        }
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_33 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (0U) : (((/* implicit */unsigned int) 0))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (569138390U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)8650)) & (((/* implicit */int) arr_3 [i_1]))))))));
            var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (-1091954250) : (-419472973)));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_16 [i_10] [i_11]))));
                arr_37 [i_1] [i_1] [i_1] [(_Bool)1] = var_10;
            }
            for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_36 -= ((/* implicit */unsigned char) arr_16 [i_12] [i_12]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_44 [i_13] [i_1] [i_12] [i_12] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) (short)28022));
                    arr_45 [i_1] [i_1] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_35 [i_1] [i_1] [i_12] [i_13]))) & (((/* implicit */int) ((arr_36 [i_10] [1U] [i_13]) >= (((/* implicit */unsigned long long int) var_10)))))));
                    var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */_Bool) (~(14951787008429507643ULL)))) ? ((-(((/* implicit */int) var_9)))) : (arr_39 [i_1] [8] [i_12] [i_13])))));
                    var_38 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_41 [i_1] [i_10] [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_42 [i_1] [i_1]))))));
                }
                for (short i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    arr_48 [i_1] [i_10] [i_12] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64173)) ? (3725828906U) : (((/* implicit */unsigned int) 843844520))))) ? (((((/* implicit */unsigned int) -736808235)) | (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [2] [i_12] [i_1]))))))))));
                    var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [(unsigned short)6]))))), (((((/* implicit */_Bool) (unsigned char)208)) ? (364366605U) : (((/* implicit */unsigned int) -1063554125))))));
                }
                for (int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) var_10);
                    var_41 = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_42 [i_15] [i_1])))));
                    arr_53 [i_1] [i_12] [(unsigned char)14] [i_15] [(unsigned char)14] [i_15] |= ((((/* implicit */_Bool) ((signed char) (~(681876527))))) ? (min((((/* implicit */int) arr_51 [i_1] [i_10] [i_12] [i_12])), ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_1] [i_1])))))) : (((/* implicit */int) var_13)));
                }
                var_42 -= ((/* implicit */int) ((((_Bool) (+(((/* implicit */int) (short)-2532))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_51 [i_1] [i_1] [i_12] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3720466980U)))))) : ((-(min((((/* implicit */unsigned int) (unsigned short)1513)), (var_12)))))));
            }
        }
    }
    var_43 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19217))) > (4936594273426381829ULL)))) : (((/* implicit */int) var_3))))), ((-((-(4325793865481450125ULL)))))));
    var_44 -= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (short)32761)))));
    var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_12)))))))));
    var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1517))));
}
