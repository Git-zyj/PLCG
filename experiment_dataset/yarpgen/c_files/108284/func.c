/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108284
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] = (unsigned char)46;
            arr_8 [i_1] = ((/* implicit */unsigned long long int) var_8);
            var_16 += ((/* implicit */unsigned int) var_13);
        }
        arr_9 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [12ULL]))) & (0ULL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_1 [i_0 + 3])))))));
        var_17 = ((/* implicit */unsigned int) var_2);
        var_18 = ((/* implicit */unsigned int) max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_19 *= ((/* implicit */unsigned int) ((int) ((signed char) arr_1 [i_2 - 1])));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_0])), (1582942945U)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0])) * (((/* implicit */int) arr_13 [i_0] [4ULL] [i_0 + 3] [i_4])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3])) ? (15122426800074174125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))))));
                            arr_22 [i_0] [(_Bool)0] [i_0 + 3] [i_0] &= max(((unsigned short)27298), (((/* implicit */unsigned short) (unsigned char)225)));
                        }
                        for (signed char i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((unsigned char) (-(arr_18 [i_2]))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(signed char)1] [i_2] [i_3 + 1] [i_4] [(signed char)1] [i_3 + 2] [i_2]))))) + (((/* implicit */int) ((signed char) var_2)))))) && (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) % (15122426800074174132ULL)))))))))));
                            var_23 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0]))));
                            var_24 = ((/* implicit */_Bool) ((((int) arr_11 [i_2 + 2] [i_2 + 3] [i_2 - 1])) * ((-(((/* implicit */int) var_3))))));
                        }
                        arr_27 [i_2] = ((/* implicit */signed char) (~(var_12)));
                        var_25 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)19920))))));
                        arr_28 [i_4] [(_Bool)1] [i_2] [(unsigned short)8] [(signed char)7] = var_2;
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3221225472U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23)))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) (unsigned char)84))))) ? (((/* implicit */int) var_2)) : (((((((((/* implicit */int) (short)-2756)) % (((/* implicit */int) (short)-27861)))) + (2147483647))) >> (((var_12) - (819420956148808984ULL)))))));
                            var_27 |= ((/* implicit */unsigned short) ((15122426800074174125ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) var_1)))))));
                            var_28 -= ((/* implicit */long long int) min(((-(arr_2 [i_2 + 2] [i_0 + 3]))), (((/* implicit */unsigned long long int) ((_Bool) arr_30 [i_0] [i_2 + 2] [i_3] [i_4] [i_4] [i_7])))));
                            var_29 ^= ((/* implicit */unsigned char) arr_26 [i_0] [i_2] [i_2] [i_3] [(signed char)8] [i_7] [i_7]);
                        }
                        for (unsigned int i_8 = 3; i_8 < 9; i_8 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)115)), (var_0)))) == (arr_30 [i_8] [i_8] [i_8] [i_8] [i_8 + 4] [i_3 + 3]))))) * (((unsigned long long int) (~(((/* implicit */int) (short)8184)))))));
                            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)185)), (((unsigned long long int) (short)2764))));
                            arr_34 [(_Bool)1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_2 + 1] [i_4] [0LL] [i_3 + 2] [i_2 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2]))) : (arr_2 [i_0 + 1] [i_0]))) - (((/* implicit */unsigned long long int) (-(arr_30 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [8ULL]))))));
                        }
                        for (unsigned int i_9 = 3; i_9 < 9; i_9 += 3) /* same iter space */
                        {
                            arr_38 [i_2] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -8556738884396065345LL)) || (((/* implicit */_Bool) var_5)))))) > ((+(var_0)))))))));
                            arr_39 [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_4] [i_2] = ((/* implicit */unsigned char) ((3324317273635377518ULL) % (15122426800074174091ULL)));
                            arr_40 [i_0] [i_2] [i_0] [i_9] = ((/* implicit */_Bool) min(((+(arr_29 [i_2] [i_4] [i_3 - 1] [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) == (var_5)))))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0]))) / (((arr_16 [i_0] [i_0] [i_0 + 1] [i_2] [12U]) / (arr_16 [i_0] [i_3] [i_0 + 1] [i_2] [i_3]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 4) 
    {
        arr_44 [i_10] = ((/* implicit */_Bool) ((unsigned int) var_2));
        var_33 -= ((/* implicit */unsigned long long int) (~(var_9)));
    }
    var_34 |= ((/* implicit */unsigned short) var_10);
    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (_Bool)1)))))) ? (((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63976)) || (((/* implicit */_Bool) var_5)))))))))))))));
    var_36 *= ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (16777215U))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) * (max((var_12), (((/* implicit */unsigned long long int) var_1)))));
    var_37 ^= ((/* implicit */unsigned char) var_9);
}
