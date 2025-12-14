/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146564
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (15486851040207782361ULL)));
        var_17 = (!(((/* implicit */_Bool) 141173593837618924LL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) (unsigned char)141);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) arr_4 [(short)11] [i_2] [i_4]);
                            var_20 = ((/* implicit */unsigned int) ((arr_14 [i_4 - 1] [i_4 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 3] [(unsigned char)5]))) : (141173593837618924LL)));
                        }
                        for (long long int i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            var_22 = ((/* implicit */int) var_2);
                            var_23 |= ((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_1] [i_0])));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))))) ? (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (12147988210654294371ULL))) : (var_13)));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 - 2] [i_2])) ? (((/* implicit */unsigned int) arr_11 [(signed char)6] [12ULL] [(signed char)6])) : (arr_9 [i_2] [1U] [1U] [i_2 - 2] [i_2] [i_2 - 1]))))));
                        }
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((long long int) arr_10 [i_2 - 2] [i_2 - 2] [i_2] [(short)3] [i_2 + 2]));
                            var_27 = ((/* implicit */int) ((arr_11 [i_0] [i_8 - 1] [i_2 - 1]) > (870499427)));
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) >= (-390461586204528281LL))) ? (((/* implicit */unsigned long long int) -1)) : (((15486851040207782361ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)10])))))));
                        }
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) 870499427)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0])))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 23ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (13564141587298502784ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_9 + 2] [i_9] [i_9])))));
                        }
                        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((short) arr_13 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_1])))));
                            var_32 = var_15;
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 870499434)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34366))) : (4022883816U)));
                            var_34 |= ((/* implicit */unsigned short) ((short) (signed char)-32));
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18776)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 + 2] [i_2 - 1] [i_2 + 2]))) : (0ULL)));
                        }
                        var_36 ^= ((/* implicit */int) 390461586204528280LL);
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20351))) != (16ULL)));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 2; i_12 < 13; i_12 += 3) 
                        {
                            var_38 = ((/* implicit */short) (+(arr_32 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1])));
                            var_39 = ((/* implicit */unsigned short) var_12);
                        }
                        /* LoopSeq 1 */
                        for (int i_13 = 2; i_13 < 11; i_13 += 3) 
                        {
                            var_40 = ((/* implicit */int) ((4022883818U) != (((/* implicit */unsigned int) ((-829971996) % (((/* implicit */int) (signed char)32)))))));
                            var_41 = ((/* implicit */unsigned char) 18065065082664601015ULL);
                            var_42 = ((unsigned long long int) 10436487478873156781ULL);
                            var_43 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) - (7520573086025707576LL))));
                        }
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_25 [i_2] [i_2] [i_2 - 1] [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) var_15))));
                        var_45 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_9 [i_11] [i_2] [i_2] [i_1] [i_1] [i_0])) ? (22ULL) : (arr_30 [i_1] [i_1] [i_1])))));
                        var_46 = ((/* implicit */long long int) ((short) (((_Bool)1) || (((/* implicit */_Bool) var_13)))));
                    }
                    var_47 = ((/* implicit */short) (~((~(18446744073709551593ULL)))));
                }
            } 
        } 
    }
    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_0))))))));
}
