/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174476
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
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)106)) << (((var_8) - (940186262))))) >> (((((/* implicit */int) ((short) var_12))) - (77)))))) ? (((/* implicit */unsigned int) var_15)) : ((~((((_Bool)1) ? (16646144U) : (var_2)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) var_8)) : (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1146378974U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_3 + 2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_1] [i_2 - 2] [i_2 - 1])))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6823478391060437032LL)))))));
                        var_18 = ((/* implicit */unsigned char) ((((long long int) ((unsigned char) var_5))) >= (((((/* implicit */_Bool) 8920602213212158688LL)) ? (-1810888440819582961LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2048)))))));
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20583)) ? (1810888440819582960LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_6 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 + 2]))) : (2383707861U)))))))));
                    }
                    arr_15 [i_0] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (unsigned short)19301)) : (((/* implicit */int) (unsigned char)128))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((long long int) (unsigned char)34)));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_0] [(short)9] [i_2 - 1] [i_2])))) ? (((((/* implicit */int) (unsigned char)31)) << (((((/* implicit */int) arr_3 [i_1 - 3])) - (17791))))) : ((-((+(((/* implicit */int) (unsigned char)12))))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? ((((_Bool)0) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_4] [i_4]))) : (((33550336) - (arr_7 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((long long int) 296309593))) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) var_6)) : (var_15))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 3])) ? (((/* implicit */int) arr_19 [i_0] [(signed char)2] [i_2 - 2] [i_4])) : (var_0))))))))));
                        }
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)227)) && (((/* implicit */_Bool) ((unsigned char) (unsigned short)46234))))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))) : (1810888440819582960LL)))) : (((((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19301))) : (arr_8 [i_4] [i_4] [11ULL] [i_4]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_6] [i_4] [i_4] [i_2] [i_1] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))))))))))))));
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [0LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)46517)), (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-69))))))) : (3484895398U)));
                            arr_28 [i_0] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */signed char) ((((255LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 2] [(unsigned char)9] [i_2 - 1] [i_2]))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_2] [i_2] [i_2] [i_4] [i_6 + 3])) ^ (arr_26 [i_1 + 1] [i_2] [(unsigned char)8] [i_2 - 2] [i_4]))))));
                        }
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0])) ? (arr_26 [i_0] [i_2] [i_2 - 2] [i_2 + 1] [i_4]) : (((/* implicit */int) (unsigned char)142))))) * ((+(arr_24 [i_0] [i_0] [i_0] [i_4] [i_2 - 2] [i_1 - 1])))));
                    }
                    for (unsigned short i_7 = 4; i_7 < 10; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) max((((unsigned char) 18446744073709551613ULL)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)2)))))));
                        arr_31 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1 - 1] [i_2 - 1]))), ((~((~(((/* implicit */int) (signed char)-4))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_25 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) (signed char)43)))) ? (((((/* implicit */_Bool) -6823478391060437032LL)) ? (max((6823478391060437032LL), (((/* implicit */long long int) (unsigned char)15)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            var_26 ^= ((/* implicit */_Bool) min((((((((/* implicit */int) arr_16 [i_1])) != (((/* implicit */int) arr_25 [i_1] [10] [i_1])))) ? (((long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */long long int) arr_4 [i_0] [i_7] [i_2 - 2])))), (((/* implicit */long long int) ((int) (short)-22)))));
                            var_27 = (i_2 % 2 == zero) ? (((/* implicit */short) ((((long long int) 4094)) % (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_18 [i_1 - 3] [i_1] [i_2] [i_7])) : (((/* implicit */int) arr_13 [i_1 - 4] [(unsigned char)6] [i_2] [i_2])))))))) : (((/* implicit */short) ((((long long int) 4094)) * (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) arr_18 [i_1 - 3] [i_1] [i_2] [i_7])) : (((/* implicit */int) arr_13 [i_1 - 4] [(unsigned char)6] [i_2] [i_2]))))))));
                            var_28 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 1335297966U)) ? (((/* implicit */int) arr_30 [(_Bool)1] [i_1 - 2] [i_2] [i_8])) : (((/* implicit */int) (_Bool)1)))));
                        }
                        arr_35 [i_2] [i_1 - 2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (min((((/* implicit */unsigned long long int) 13U)), (6024761841234327554ULL))) : (((/* implicit */unsigned long long int) ((6823478391060437041LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-15741)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_7] [i_2] [i_2 - 2] [i_2] [i_1] [i_0]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_22 [i_0] [i_1] [i_0] [i_2] [i_1] [i_2] [i_1])) : (36028797018963456LL))) : (min((arr_11 [i_0] [i_2] [(unsigned char)6] [i_7]), (((/* implicit */long long int) var_0)))))))));
                    }
                }
            } 
        } 
    } 
}
