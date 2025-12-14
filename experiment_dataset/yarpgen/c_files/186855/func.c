/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186855
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3263078370U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6553381897991645935LL)))) ? (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0])) : (-4785946107331977492LL))) : (max((arr_3 [i_0]), (-4785946107331977492LL)))));
                        arr_10 [i_0] [i_1] [(_Bool)1] [i_3] = (~((-(((/* implicit */int) (unsigned char)77)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_0] [(unsigned short)18] [(unsigned char)6] = ((/* implicit */long long int) ((short) var_7));
                            arr_17 [i_0] [i_2] [i_0] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_7) / (arr_4 [i_2] [11] [i_5])))) != ((-(arr_5 [(signed char)7] [i_4] [i_1] [i_0])))));
                        }
                        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) 7406707507972536579ULL))));
                            arr_20 [i_0] [i_6] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                        }
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_12 = ((/* implicit */_Bool) (+(-4101528382260930808LL)));
                            arr_25 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */short) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0])) != (((/* implicit */int) var_1))))))));
                            arr_26 [8ULL] [(_Bool)1] [i_4] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            arr_27 [i_7] [1LL] [i_0] [1LL] [i_0] = (~(((((/* implicit */_Bool) 6227588795478356870LL)) ? (4101528382260930808LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_4] [(_Bool)1]))))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) var_5))));
                        }
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_32 [i_0] = ((/* implicit */long long int) ((var_1) || (((/* implicit */_Bool) arr_1 [i_0]))));
                            var_14 = ((/* implicit */short) 0ULL);
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-19892))))) << (((9223372036854775807LL) - (9223372036854775798LL)))));
                        }
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_23 [6LL])))))))));
                        var_17 = ((/* implicit */unsigned char) (short)16747);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)77)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned char)130))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned long long int) var_8)) : (5970864470885817579ULL)))))) : (32767U)));
                        var_20 = ((/* implicit */long long int) ((unsigned char) -942896863));
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])) ? (max((arr_9 [i_0] [i_0] [i_1] [i_2] [i_1] [i_2]), (arr_9 [i_0] [i_0] [16LL] [0] [i_2] [(unsigned short)10]))) : (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_2] [i_1] [i_2] [i_1] [i_2] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (short)15))))) <= (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) 5970864470885817582ULL))))))))));
}
