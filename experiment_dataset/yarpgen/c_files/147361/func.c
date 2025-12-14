/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147361
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) ((4945556733660301619ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13501187340049249976ULL))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_7 [i_1] [i_1] [i_1] [i_0] = (+(((/* implicit */int) arr_4 [i_0] [i_1])));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_2] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (arr_9 [i_4] [i_1] [i_2] [(unsigned short)11])));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4188639692U)))) && ((!(((/* implicit */_Bool) (unsigned char)52))))));
                        }
                    } 
                } 
                arr_14 [(signed char)2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4945556733660301604ULL)))) && (((arr_0 [i_2]) && (((/* implicit */_Bool) 13501187340049249996ULL))))));
            }
        }
        var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) - (168429234)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_0] [i_0])))) : ((-(4945556733660301606ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-19687))))) != (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)215)), ((unsigned short)49773)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_18 [17ULL] [i_0] = ((((/* implicit */_Bool) 5865440714509518396ULL)) ? (((((/* implicit */_Bool) (short)10056)) ? (13501187340049250013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_5 - 1]))));
            /* LoopSeq 3 */
            for (int i_6 = 3; i_6 < 23; i_6 += 1) 
            {
                arr_21 [i_0] [i_5] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)10070))))));
                var_19 = ((/* implicit */unsigned char) ((1005024533430093908ULL) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)98)))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_20 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (13501187340049250011ULL)));
                var_21 ^= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_25 [17ULL] [i_0] [i_7] [i_0] &= ((/* implicit */unsigned short) (+(18046337364689439869ULL)));
            }
            for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_5])) & (((/* implicit */int) ((unsigned short) 14412138143806494945ULL)))));
                var_23 = ((/* implicit */signed char) 1005024533430093907ULL);
            }
        }
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            arr_31 [i_9] [i_9] [19ULL] = max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_9] [12ULL]))))), (min((12289275162280973758ULL), (((/* implicit */unsigned long long int) (signed char)-82)))))), (min((max((arr_26 [i_0] [i_0] [4ULL] [i_9]), (((/* implicit */unsigned long long int) 1080602478)))), (max((((/* implicit */unsigned long long int) arr_15 [i_0])), (arr_9 [i_9] [(_Bool)1] [(_Bool)1] [i_0]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                arr_35 [i_0] [(unsigned short)13] [i_9] [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (signed char)-126))))));
                arr_36 [i_0] [23ULL] [i_9] [i_9] = ((/* implicit */_Bool) ((((-1436157585) + (2147483647))) << (((arr_32 [i_10 - 1] [i_9] [i_9 - 1]) - (557285679)))));
                var_24 = ((/* implicit */int) (signed char)-55);
            }
            for (signed char i_11 = 2; i_11 < 23; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 3; i_12 < 21; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        {
                            var_25 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 13501187340049250013ULL)))) / (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)141))))), (min((((/* implicit */unsigned int) (signed char)-12)), (2228984708U)))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4945556733660301604ULL)) ? ((-(((/* implicit */int) (unsigned short)45031)))) : (((/* implicit */int) arr_1 [i_0]))));
                            arr_45 [i_0] [i_9 - 1] [i_9] [i_13] [i_13] [(unsigned char)15] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (short)-5511)) || (((/* implicit */_Bool) arr_15 [i_9 + 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_27 = 2473047403816502340ULL;
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned char)74), (((/* implicit */unsigned char) (signed char)93))))))))));
                    var_29 = ((((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) arr_40 [i_9 + 3] [i_9])) : (((/* implicit */int) arr_40 [i_9 + 4] [i_9])))) >> ((+(((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_9] [i_9]))))));
                }
            }
            for (signed char i_15 = 2; i_15 < 23; i_15 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_9 + 1])) || (((/* implicit */_Bool) (signed char)-93))))) - (((/* implicit */int) (!((_Bool)1))))));
                arr_52 [i_0] [i_9] [i_9 + 1] [i_9] = ((/* implicit */_Bool) 17441719540279457708ULL);
            }
        }
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))) == (var_14)));
    var_32 = ((/* implicit */unsigned char) ((int) var_1));
    var_33 &= ((/* implicit */unsigned long long int) ((1247529274U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))));
}
