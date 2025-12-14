/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126519
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) min((-17LL), (var_0)));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0])) - (var_6))), (((/* implicit */long long int) (+(-1453233681))))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_0)))) < (min((arr_1 [i_0]), (arr_1 [i_1])))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_0]))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) ((unsigned char) arr_0 [i_0])))) <= (arr_11 [i_1] [2LL])));
                        arr_15 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 1453233697)) > (8260480032082639452LL)));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_6 [i_2 - 1] [i_2 - 1] [i_3 + 2]) / (arr_6 [i_2 - 1] [i_2] [i_3 + 2])))) * (((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((arr_13 [i_1] [4U] [i_2] [(unsigned char)14]), (arr_2 [i_1] [i_1]))))))))));
                    }
                } 
            } 
        }
        arr_16 [(unsigned short)0] &= (-(((int) arr_10 [i_0] [i_0] [i_0] [i_0])));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) -8260480032082639452LL);
        var_16 = max((((((/* implicit */_Bool) arr_18 [i_4])) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4])) || (((/* implicit */_Bool) 18446744073709551596ULL)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4])) && (((/* implicit */_Bool) arr_19 [i_4] [i_4]))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (arr_19 [i_4] [(unsigned char)0])))))));
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_4]))))) ? (min((20ULL), (((/* implicit */unsigned long long int) arr_19 [(signed char)19] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_4] [i_4])), ((unsigned short)32256))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [i_4] [i_4]), (((/* implicit */int) arr_18 [(_Bool)1]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)0)))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) != (1551273655360353709ULL)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5])))))));
        arr_23 [i_5] = ((/* implicit */signed char) (-(arr_19 [i_5] [i_5])));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) arr_22 [i_5] [i_5]))))) < (((/* implicit */int) min((arr_21 [0ULL]), (arr_17 [i_5] [i_6]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_6] [i_7]))))) ? (arr_30 [i_7 - 2] [i_7 - 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (unsigned short)33280))))))))));
                arr_31 [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (((18446744073709551596ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_5])))))))), (((arr_24 [i_7 - 1]) ^ (((((/* implicit */int) arr_27 [i_6] [i_5])) & (((/* implicit */int) arr_28 [i_5] [(short)9] [1] [i_5]))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 1453233681)) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5])) < (((/* implicit */int) arr_29 [i_9] [i_7 - 3]))))) : ((-(((/* implicit */int) arr_29 [i_5] [i_5]))))))));
                            var_21 = ((/* implicit */signed char) arr_30 [i_5] [14ULL] [i_9]);
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((min((((unsigned long long int) arr_21 [i_5])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_21 [i_7]))))))), (((/* implicit */unsigned long long int) var_4)))))));
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                arr_39 [i_6] [i_6] = ((/* implicit */unsigned short) arr_20 [i_6]);
                var_23 = ((/* implicit */int) (((((-(((/* implicit */int) arr_36 [i_5] [(unsigned short)6] [i_10] [i_10] [i_10] [i_10])))) | (((/* implicit */int) (!(((/* implicit */_Bool) -2033834606))))))) > ((~(((/* implicit */int) arr_22 [i_5] [(unsigned short)11]))))));
                var_24 = ((/* implicit */signed char) arr_26 [i_10] [(unsigned char)18]);
                var_25 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)4] [i_6]))) - (min((((/* implicit */unsigned long long int) arr_25 [i_5] [i_5] [i_5])), (arr_34 [(unsigned char)14] [5LL] [i_10] [(unsigned char)14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) != (min((((/* implicit */long long int) arr_38 [11LL] [i_5] [i_5])), (arr_25 [i_10] [i_6] [i_5]))))))));
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) -8268495167561254505LL);
                            var_27 ^= ((/* implicit */short) min((((/* implicit */long long int) min(((+(((/* implicit */int) (short)-433)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2033834606)) != (arr_43 [i_5]))))))), (arr_48 [i_6])));
                        }
                    } 
                } 
            } 
            var_28 = min((2251799679467520LL), (((/* implicit */long long int) ((unsigned short) 0))));
            arr_49 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) arr_38 [(unsigned char)11] [i_5] [i_5]);
        }
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned int) ((arr_47 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ^ (arr_47 [i_14] [i_14] [2U] [i_14] [2U] [i_14])))) : (arr_42 [i_14] [18] [i_14] [i_14])));
        arr_53 [i_14] = ((/* implicit */int) (~((+(var_4)))));
    }
}
