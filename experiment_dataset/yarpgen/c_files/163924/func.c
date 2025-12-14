/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163924
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned short) ((_Bool) 8583410135909102161LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 351296368532025987LL)) ? (-351296368532025996LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2])))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_21 = ((((/* implicit */_Bool) (short)19971)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)538))) : (351296368532025987LL));
                var_22 = ((((/* implicit */_Bool) (unsigned char)217)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)1))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)17)) != (((/* implicit */int) (unsigned char)196)))))));
                var_23 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (351296368532026019LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)16)) ? (arr_4 [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */int) (short)32767))));
                    arr_12 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 351296368532025987LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19722)) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28828))))))));
                    arr_13 [i_3] [i_3] [i_3] [i_0] = (+(((/* implicit */int) (short)-32764)));
                }
                for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    arr_17 [(short)12] [i_1] [i_1] [i_4] [i_2] [(short)12] = ((((/* implicit */_Bool) ((((/* implicit */int) (short)5428)) << (((((/* implicit */int) (unsigned short)8775)) - (8767)))))) ? (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((int) 26LL))));
                    arr_18 [i_0] [i_0] [i_2] [i_4] = ((((/* implicit */_Bool) (unsigned char)46)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
                    var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)19808))))) ? (4230535501840736837LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26332))));
                    arr_19 [i_0] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1]))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_25 += (~(((/* implicit */int) (unsigned short)17)));
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_5] [i_4] [i_4] [i_2] [i_1] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (short)6148)))) : (arr_2 [i_0 + 1] [i_0 - 1])));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) 478061113))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_5] [i_0 - 2])) % (-980801617))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */int) (short)5428);
                        arr_27 [i_6] = ((/* implicit */long long int) ((((1651179637402819457LL) + (-8752613172067944718LL))) > (((arr_5 [i_6] [i_4] [i_2]) ? (-351296368532025983LL) : (4230535501840736853LL)))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_0] [i_2] [i_1] [11ULL] = ((/* implicit */long long int) (-(7746472537756972863ULL)));
                        arr_33 [i_1] = ((/* implicit */unsigned char) ((arr_0 [i_4] [i_0]) ? (((/* implicit */int) arr_0 [i_1] [i_4])) : (((/* implicit */int) var_15))));
                        arr_34 [i_0 - 1] [11LL] [i_0 - 1] [i_4] [11LL] [i_7] [i_7] = ((/* implicit */short) (+(arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                        arr_35 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -7097403687404880433LL)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_21 [i_0 - 2] [i_1] [i_0 - 2] [i_0 + 1] [i_7] [i_7] [i_7]))));
                    }
                }
            }
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_29 = ((/* implicit */_Bool) var_7);
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    arr_40 [i_8] [i_8] = ((/* implicit */long long int) (short)7660);
                    var_30 -= ((/* implicit */_Bool) (short)30415);
                    var_31 = ((/* implicit */short) ((arr_0 [i_0] [16LL]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))));
                }
                for (short i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    var_32 += ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_10] [i_10])) - (((/* implicit */int) (unsigned short)0))));
                    arr_45 [i_0 + 1] [i_0 + 1] [i_8] [i_0 + 1] [i_10] [i_10 + 2] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) -4230535501840736838LL)))));
                    var_33 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_46 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)12681))) / (((((/* implicit */_Bool) (short)-1)) ? (351296368532025971LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))));
                }
            }
            var_34 = ((/* implicit */short) ((((/* implicit */int) var_15)) | (((/* implicit */int) (short)-26233))));
            arr_47 [i_1] [i_0] = ((arr_25 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))));
        }
        arr_48 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-15311)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41542))) : (((((/* implicit */_Bool) -81281586884252061LL)) ? (34359738397LL) : (((/* implicit */long long int) ((/* implicit */int) (short)26216)))))));
        var_35 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0])))) ? (8794278464112857072LL) : (((((/* implicit */_Bool) (short)-27567)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_36 [i_0 + 1] [i_0 + 1] [i_0]) == (((/* implicit */int) (unsigned char)206)))))) : (max((-4682426524912041127LL), (((/* implicit */long long int) (short)(-32767 - 1)))))))));
    }
    var_36 = (short)5428;
    var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) (short)22740))) ? (var_17) : (var_10)))));
}
