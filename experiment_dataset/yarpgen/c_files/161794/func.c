/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161794
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) -48685310))));
                arr_6 [i_0] [i_0] = (+(48685308));
                arr_7 [i_0] [i_1] [i_1] &= ((/* implicit */short) (-((+(-48685308)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [(short)0] [(_Bool)1] [(short)1] [i_3] [i_3] [(_Bool)1] = ((/* implicit */long long int) -48685308);
                                var_16 = max((((((/* implicit */_Bool) (signed char)28)) ? (-48685315) : (((/* implicit */int) (short)15768)))), (((/* implicit */int) ((_Bool) -1302423709560966221LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    arr_26 [i_7] [i_7 - 1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)-38)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-90)) : (-915488450))))) - (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)49))))));
                    var_18 += ((/* implicit */long long int) (~(-48685292)));
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (477170085995222731ULL))) & (((/* implicit */unsigned long long int) (~(6606842279056306545LL)))))) ^ (((((/* implicit */_Bool) 7189889311327184111ULL)) ? (((/* implicit */unsigned long long int) -2437061274874417196LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))) | (477170085995222716ULL)))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */int) (unsigned short)34656)) | (((/* implicit */int) (unsigned char)124))))));
                        var_21 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */_Bool) -915488450)) || (((/* implicit */_Bool) (unsigned char)206)))) || (((((/* implicit */_Bool) 915488450)) && ((_Bool)0)))))), (((((/* implicit */_Bool) -48685330)) ? (-48685308) : (((/* implicit */int) (signed char)114))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) max(((-(-718240191))), (((/* implicit */int) min(((unsigned short)22767), ((unsigned short)11041))))))))));
                        /* LoopSeq 2 */
                        for (short i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
                        {
                            arr_38 [i_5 - 1] [i_6] [i_7 + 2] [i_9] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (short)-24856)) / (((/* implicit */int) (signed char)114))))))));
                            var_23 = ((/* implicit */short) ((unsigned char) (!((_Bool)0))));
                        }
                        for (short i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            arr_41 [i_7] = ((/* implicit */signed char) 4);
                            arr_42 [i_5] [i_6] [i_7] [i_9] = ((/* implicit */short) ((int) (unsigned short)56070));
                        }
                    }
                    for (int i_12 = 2; i_12 < 9; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((int) (unsigned short)19)))));
                        arr_45 [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65519)) ^ (((((/* implicit */_Bool) -146367378)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (unsigned short)3))))));
                        var_25 -= ((/* implicit */signed char) (short)-15895);
                    }
                    for (int i_13 = 2; i_13 < 9; i_13 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) -48685326);
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((max((-9LL), (((/* implicit */long long int) ((unsigned short) -48685324))))) < (((long long int) (unsigned short)56070)))))));
                        arr_48 [i_5] [i_5] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((short) ((((unsigned long long int) 0LL)) | (((/* implicit */unsigned long long int) 4095)))));
                    }
                    arr_49 [i_7] = ((/* implicit */int) (unsigned short)56070);
                }
            } 
        } 
    } 
}
