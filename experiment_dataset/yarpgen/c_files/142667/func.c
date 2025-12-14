/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142667
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
    var_14 = ((/* implicit */unsigned long long int) (unsigned short)44228);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)33157)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)32390)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_5))))) : (min(((-(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32379)) ? (((/* implicit */int) var_2)) : (-578213976))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)10)), (arr_2 [i_1])));
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)32390)) ? (((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */unsigned long long int) -578213976)) : (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_0]))))) ^ (((10441129545501743652ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21313)) ? (((/* implicit */int) (unsigned short)33155)) : (((/* implicit */int) arr_2 [i_0])))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32380)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1))))) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) ((unsigned short) arr_7 [i_0] [(unsigned short)6] [i_1] [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32393)) ? (arr_4 [i_0] [i_1 + 2]) : (5398289950799702128ULL)))) ? (((/* implicit */int) (short)27238)) : ((~(((/* implicit */int) (unsigned short)32391)))))))))));
                    arr_8 [i_2] [i_1] [i_1 + 3] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [3ULL])) ? (13048454122909849488ULL) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) 5398289950799702127ULL)) ? (-582551538) : (((/* implicit */int) (short)-737)))) : (((/* implicit */int) (unsigned short)33156))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(_Bool)1] [i_2] [i_2 + 2])) ? (arr_0 [i_0 + 1]) : (arr_3 [(unsigned short)17])))) ? (((((/* implicit */_Bool) 144115188075593728ULL)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_2] [i_0] [i_0])) : (-448750024))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43604))))))) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) (unsigned short)33151);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(max((((unsigned long long int) arr_3 [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4016799868U))))))))))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) 18446744073709551605ULL);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_0 [i_4])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27237))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((short) arr_6 [i_0 + 2] [i_1 - 2] [i_1 + 3] [i_4]))))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((((/* implicit */_Bool) 10441129545501743652ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)857))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)5] [i_1] [(unsigned char)5])) ? (arr_6 [i_0] [i_1] [i_1 + 2] [i_1 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44219)))))) ? (((/* implicit */int) arr_7 [i_0] [(unsigned short)4] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)3]))))))))));
                    arr_13 [i_0 - 1] [i_1 + 4] [(short)3] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1]))) : (11950967891942647737ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)37)))))))) ? (((((_Bool) arr_7 [i_0] [12ULL] [i_4] [12ULL])) ? (arr_6 [i_0] [i_1 + 4] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13172)) ? (((/* implicit */int) arr_11 [(unsigned char)10] [14U] [i_4])) : (((/* implicit */int) (unsigned short)32380))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4718959276070311711ULL))))))));
                    var_24 *= ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)59972), (((/* implicit */unsigned short) arr_9 [(unsigned short)8])))))))) : (min((((arr_3 [i_0]) ^ (12057651458670711423ULL))), (((((/* implicit */_Bool) arr_4 [i_4 + 3] [i_1])) ? (arr_3 [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))))))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)13174)) : (((/* implicit */int) (unsigned short)33165))))) ? (((/* implicit */int) min(((unsigned short)33155), ((unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)13172)) ? (var_6) : (((/* implicit */int) (unsigned short)23136))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)857))) == (((/* implicit */int) (short)857)))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                var_26 = ((/* implicit */int) (unsigned short)32370);
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_17 [i_5]) : (((arr_16 [10ULL]) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) 1597045110)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((17654640722736426791ULL), (((/* implicit */unsigned long long int) 1755607307))))) ? (((arr_16 [i_6]) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_16 [i_5])))) : (((/* implicit */int) ((unsigned short) arr_17 [i_6])))))))))));
            }
        } 
    } 
}
