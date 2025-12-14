/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139647
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((unsigned long long int) min((((/* implicit */int) (unsigned short)16384)), (arr_1 [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_1 [(short)8] [(short)8]) : (arr_1 [i_0] [i_0]))), ((~(((/* implicit */int) (_Bool)0))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) max((541234877), (-1136603391)))), (min((((/* implicit */unsigned int) (short)8736)), (arr_6 [i_0] [i_1] [i_0])))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22282)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)14))));
                    arr_8 [12ULL] [i_1 - 1] |= ((/* implicit */unsigned char) (-((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) | (var_3)))))));
                    var_12 = var_2;
                }
            } 
        } 
        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 18446744073709551584ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)553))) : (arr_3 [i_0] [4ULL] [i_0])))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_6 [(unsigned char)15] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [(short)1])) : (arr_3 [i_0] [i_0] [(_Bool)1])))))));
        var_14 *= ((/* implicit */unsigned char) (_Bool)1);
        var_15 = ((((/* implicit */_Bool) (unsigned char)16)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [15ULL] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (short)9)) ? (6513708716505074789ULL) : (((/* implicit */unsigned long long int) arr_1 [i_3] [i_3])))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    arr_18 [i_3] = (unsigned short)24711;
                    arr_19 [i_4] |= ((/* implicit */short) arr_15 [i_5]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_26 [i_3] [i_6] [i_7] = ((int) (short)10608);
                    arr_27 [i_3] [i_3] [i_6] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)15558)) : ((~(((/* implicit */int) (unsigned short)15872))))))) ? (11534025822118726515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))));
                }
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
    {
        var_17 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [14]))) * (4398046511103ULL))) != (((((/* implicit */_Bool) var_10)) ? (10817999768150040548ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1594))))));
        arr_31 [i_8] [i_8] = ((arr_30 [i_8]) ? ((-(((/* implicit */int) arr_28 [i_8])))) : (((/* implicit */int) arr_28 [i_8])));
    }
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
        {
            var_18 = ((/* implicit */int) (+(((arr_37 [i_10 - 2] [i_10 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_10 - 2] [i_10 - 2])))))));
            var_19 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_10] [14])) >= (((/* implicit */int) arr_30 [i_10]))))), (((((/* implicit */_Bool) arr_37 [(short)11] [i_10])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_10]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -101331635)) < (14ULL)))) - (((/* implicit */int) (unsigned char)173)))))));
            var_20 -= ((/* implicit */unsigned char) arr_34 [i_9] [i_10]);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)33209))) >> (((((/* implicit */int) (unsigned char)57)) - (36)))))) ? (((((/* implicit */int) ((10338492651675179574ULL) < (5659782894313658574ULL)))) - (((/* implicit */int) arr_35 [i_9] [i_10 - 2])))) : (((/* implicit */int) max((((var_10) > (arr_37 [i_9] [i_9]))), (arr_30 [i_10]))))));
            var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2472078090153676182LL))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
            {
                arr_44 [i_11] [i_11] [i_11] [11] = ((/* implicit */unsigned char) (-(arr_41 [i_11])));
                var_23 = ((/* implicit */unsigned char) (~(arr_43 [i_12] [i_9] [i_9])));
            }
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_10)))) << (((/* implicit */int) ((_Bool) 4503599627239424ULL))))))))));
                var_25 = var_3;
                arr_47 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (12272479010865348696ULL) : (730578390503479543ULL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) arr_36 [i_9]))))) ^ (((/* implicit */int) min((arr_32 [i_9]), (arr_35 [i_9] [i_13]))))));
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (_Bool)1))));
                var_27 += ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((+(((((/* implicit */_Bool) (unsigned short)64977)) ? (-1700074511) : (((/* implicit */int) arr_39 [i_11] [i_13]))))))));
            }
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                for (int i_15 = 1; i_15 < 17; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        {
                            arr_55 [i_9] [(unsigned char)2] [i_14] [i_15] [(unsigned char)2] |= ((/* implicit */_Bool) (~(var_2)));
                            var_28 += (-(((/* implicit */int) (unsigned char)121)));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 4) 
        {
            arr_58 [i_17] [i_9] [i_9] = ((/* implicit */unsigned short) arr_41 [i_17]);
            var_29 += ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)62)));
        }
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
        {
            arr_62 [i_9] [i_9] [i_9] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((359121935) / (2147483647)))) || (((/* implicit */_Bool) var_3))))), ((~(((/* implicit */int) arr_57 [i_9]))))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)160)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_45 [(short)4])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) != (((/* implicit */int) arr_61 [i_9] [i_18] [i_18]))))))))));
            arr_63 [i_9] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1048512)) == (var_2)));
            var_31 *= ((/* implicit */unsigned char) 8025805045708845191LL);
        }
    }
    var_32 |= ((/* implicit */unsigned char) var_9);
    var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9257)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
}
