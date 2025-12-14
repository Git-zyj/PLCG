/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132392
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (2787093815U))))));
    var_11 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15619653260017369045ULL)) ? (3093395300354709008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)237)) / (((/* implicit */int) var_7))))) : (var_8))) + (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) 2147483641)), (var_5)))))));
    var_12 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (-2147483642) : (((/* implicit */int) arr_0 [13ULL]))))) ? (((/* implicit */int) ((unsigned short) 387128798942554968ULL))) : (((/* implicit */int) arr_0 [i_0])))) << (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [4] |= ((/* implicit */short) (((~(arr_1 [(_Bool)1]))) & ((~(arr_1 [(unsigned char)4])))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 *= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) arr_0 [i_0])) - (arr_1 [0U]))))) <= (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_4 [4U]))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (arr_1 [(_Bool)1])))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 524284)) >= ((+(arr_3 [4ULL] [i_0] [i_1])))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (arr_3 [i_0] [i_0] [i_0]))), (arr_4 [i_0])))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 2508773950U)) ? (((9051537664737443690ULL) / (5395087352971097181ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 90434091U)) ? (-88116511) : (-524312))))));
            var_15 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [6ULL])) * (((/* implicit */int) ((short) 1497610769)))));
        }
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) min(((unsigned short)14614), (((/* implicit */unsigned short) (unsigned char)192))))))), (((/* implicit */int) (_Bool)1))));
                            var_16 |= ((/* implicit */short) ((((unsigned int) ((int) (unsigned char)189))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))))))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((unsigned short) ((unsigned short) ((_Bool) 5389082256607590835ULL)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_8 [4ULL])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10100))))) : (((412316860416ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) + (((((/* implicit */_Bool) ((arr_12 [2ULL]) ^ (arr_18 [i_0] [6] [i_4] [(unsigned short)8])))) ? (((/* implicit */unsigned long long int) arr_15 [i_4] [i_3] [(unsigned char)10])) : (((((/* implicit */_Bool) 1866906336295733549ULL)) ? (8451389831826655152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
            }
            for (short i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                var_19 = max((((unsigned long long int) 3961186895U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (short)32767))))));
                arr_25 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_18 [i_0] [(_Bool)1] [i_7] [i_7]);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 23; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 2) 
                    {
                        {
                            arr_34 [18ULL] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [(_Bool)1])) | (((/* implicit */int) arr_7 [i_0] [16ULL] [i_3])))), (((((/* implicit */int) arr_14 [i_0] [0ULL])) | (arr_1 [12ULL])))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))) : (arr_3 [i_3] [14ULL] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_0] [i_3] [(short)3] [13] [6ULL]))))) : ((~(9918635909253390880ULL)))))));
                            arr_35 [i_0] [i_3] [(_Bool)1] [i_0] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (-(8339095163484360458ULL))))) ? (((unsigned long long int) ((arr_4 [i_0]) ? (arr_13 [i_0]) : (((/* implicit */unsigned long long int) 3456636881U))))) : (((unsigned long long int) ((unsigned char) arr_20 [i_10] [(_Bool)1] [16U] [(unsigned short)2] [10U])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)14614)) ? (((/* implicit */unsigned long long int) arr_27 [i_0] [21ULL] [i_8] [10ULL])) : (arr_29 [i_0]))) - (((((/* implicit */_Bool) -2147483642)) ? (arr_12 [i_8]) : (arr_8 [i_0])))))) ? (min((((((/* implicit */unsigned int) 225610400)) - (0U))), (((/* implicit */unsigned int) (((_Bool)0) ? (2147483647) : (((/* implicit */int) (unsigned char)66))))))) : (((/* implicit */unsigned int) max((((int) 427626512631406462ULL)), (((/* implicit */int) arr_31 [i_0] [i_0] [i_3] [(_Bool)1] [i_8])))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_21 -= (-((~(8528108164456160736ULL))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((-2147483642) <= (-2147483627))))) ? (((unsigned long long int) min(((short)-14346), (arr_11 [i_0] [i_3] [i_11])))) : (((((((/* implicit */unsigned long long int) 1432800584U)) * (4591764691171899489ULL))) + (max((0ULL), (arr_9 [2ULL]))))))))));
            }
            arr_38 [i_0] = ((/* implicit */unsigned int) 8593838623104452055ULL);
            var_23 = ((unsigned long long int) ((unsigned long long int) 12435327635349978772ULL));
            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) (short)(-32767 - 1))) ? ((+(arr_8 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (-1834235808))))))) ? (((((/* implicit */_Bool) ((arr_28 [i_0] [i_3] [(unsigned char)18]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761)))))) ? (((624567357330200538ULL) % (((/* implicit */unsigned long long int) arr_15 [0U] [12ULL] [6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))))) : (1189990899218781093ULL)));
        }
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((0U), (((/* implicit */unsigned int) (_Bool)1)))))));
}
