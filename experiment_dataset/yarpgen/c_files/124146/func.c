/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124146
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12ULL] [12ULL])) ? (var_8) : (var_8)))) ? (((((/* implicit */_Bool) 125705332)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [8ULL] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)1]))))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) && ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (-1LL)))))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)144)))) % (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) ((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_18 += (_Bool)1;
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_3] [i_4])) : (774715781))) % (((/* implicit */int) (unsigned short)40794))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_21 = (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) : (var_5));
                            var_22 = ((/* implicit */unsigned long long int) (short)-27725);
                            var_23 = ((/* implicit */short) arr_16 [(signed char)0] [0] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            var_24 += ((/* implicit */unsigned long long int) (((~(arr_16 [i_1] [i_8 + 2] [i_1] [i_1] [i_1]))) < (var_5)));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 1316999077U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_8 + 2] [i_1] [i_8] [i_8 + 2] [i_1] [i_8]))) : (3047518253U)));
            var_26 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_8] [i_1] [(unsigned char)12] [i_1] [i_8 + 2] [i_1]))) <= (var_6)));
            var_27 |= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_1] [i_8 + 1] [i_1])))))));
        }
        var_28 = ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_9)));
        var_29 |= ((/* implicit */int) -11LL);
        arr_22 [15ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4503599358935040LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27722))) : (12062436476874400307ULL)));
    }
    var_30 = ((/* implicit */unsigned int) var_12);
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((var_14) == (((max((((/* implicit */unsigned long long int) var_7)), (var_14))) - (max((var_14), (((/* implicit */unsigned long long int) 2080258932U)))))))))));
}
