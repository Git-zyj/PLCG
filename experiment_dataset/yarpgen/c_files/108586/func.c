/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108586
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_0 [16U])))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17800)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 920178353691927779ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min((arr_0 [i_0]), ((short)-11045)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), ((+(((unsigned int) var_7))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-11038)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11025))) : (920178353691927764ULL))));
                        arr_16 [i_1] [(signed char)13] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)11042)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1])))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-11068)) == (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_11 [i_4] [i_3] [i_1] [i_1])))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (short)-11031))))));
                        arr_20 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [(unsigned char)10]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)-11031))))) : (4294967274U)));
                    }
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(43U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_17 [i_1] [i_2] [i_3] [i_6] [i_6])))) : (var_7)));
                        var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) 17526565720017623861ULL)))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] = ((unsigned char) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)-32759))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2])) * (((/* implicit */int) (signed char)54))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2338901687178672709ULL) + (14554899897646217473ULL)))) ? (((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_2] [i_3])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2]))))))));
                    }
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_1])) > (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_10))) ? (((arr_10 [i_8] [i_3] [8U]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)967)))))));
                                var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6129601468610192514ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (920178353691927769ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1])))));
                                arr_36 [i_1] [i_2] = ((/* implicit */_Bool) (unsigned short)65535);
                                arr_37 [i_1] [i_2] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)9409))))) : (((/* implicit */int) ((unsigned char) var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) (short)24526);
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(arr_8 [i_1] [i_1] [i_1]))))));
        var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)4])))))));
        var_26 = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1] [i_1]);
    }
    var_27 = ((/* implicit */unsigned int) 920178353691927768ULL);
    var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)41059)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)11036)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56743)) || (((/* implicit */_Bool) (short)-24533)))))))), (var_11)));
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((int) var_6)) | (((((/* implicit */_Bool) 17526565720017623847ULL)) ? (((/* implicit */int) min((var_4), (var_4)))) : ((+(((/* implicit */int) var_3)))))))))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-32765)), ((unsigned short)56743)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)22556), ((short)32765))))) : (((((/* implicit */_Bool) var_13)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) min((var_12), ((unsigned short)65513)))))));
}
