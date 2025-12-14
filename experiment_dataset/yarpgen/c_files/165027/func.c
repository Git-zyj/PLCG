/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165027
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned short) (short)32764);
        var_14 = ((/* implicit */long long int) (unsigned short)4541);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_15 &= ((/* implicit */long long int) ((unsigned short) (+(2067271539U))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)32750))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)127)) | (((/* implicit */int) (short)32758))))) : (arr_11 [i_3] [i_1 + 1] [i_3])))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_4 - 1] [i_4] [i_3] [i_1 + 1] [19U] [i_2 - 1] [i_4])) - (((/* implicit */int) (_Bool)1))));
                                arr_15 [i_2] [i_2] [i_2] [22] [i_2] [i_2] [(unsigned short)20] = ((/* implicit */unsigned long long int) var_12);
                                arr_16 [i_1 + 1] [i_2 + 1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) (short)32759);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(var_5))))));
                    var_19 -= ((/* implicit */_Bool) ((4294967292U) << (((((/* implicit */int) arr_12 [i_1 + 3] [i_1] [13ULL] [i_2 - 1] [i_2 - 1])) - (34576)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_21 [(unsigned short)15] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8166))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_14 [i_6] [i_6] [22] [i_6 + 1] [(unsigned short)3])) * (((/* implicit */int) var_7))))));
    }
    for (int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        arr_34 [i_7] [i_8] [10ULL] [i_10] [i_8] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (unsigned short)6794)) : (((/* implicit */int) arr_17 [i_10] [i_10]))))));
                        arr_35 [i_8] [i_8] [i_8] [(unsigned short)7] = ((/* implicit */unsigned short) min((17091918668272565351ULL), (((/* implicit */unsigned long long int) (unsigned short)47521))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (short)-32764))) << ((((+(var_11))) - (3813985918064252186ULL)))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23044)) << (((var_2) - (10854419836180791891ULL)))))) ^ (max((((/* implicit */unsigned long long int) ((signed char) (_Bool)1))), (((((/* implicit */_Bool) (short)-25656)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748))) : (16387851125757738815ULL)))))));
                    }
                } 
            } 
            var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32764))))), (max((((/* implicit */unsigned long long int) 3517773099U)), (var_4)))));
            arr_36 [i_8] [19] = max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_7] [14] [i_8]))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (arr_11 [i_7] [i_8] [i_8]))))), (((3729272850U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_8] [(unsigned short)7] [i_7]))))));
            /* LoopNest 3 */
            for (short i_11 = 2; i_11 < 17; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        {
                            arr_44 [i_7] [i_7] [(unsigned char)12] [(unsigned short)16] [i_7] [i_11] &= ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_25 [i_11 + 3]))))));
                            arr_45 [i_7] [i_8] [i_7] [i_7] [18U] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7] [(_Bool)1] [i_12] [i_11 - 2] [3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (2058892947951812789ULL))))));
                            var_23 -= ((/* implicit */_Bool) (((((!((_Bool)1))) ? (9223367638808264704LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) >= (2058892947951812801ULL))))))) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)28188)))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            arr_50 [i_7] [(short)10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_38 [i_7] [i_14] [i_14]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            arr_51 [i_7] [19U] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)23044))))), ((-(((((/* implicit */_Bool) (unsigned char)218)) ? (113117927685014479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_24 = ((((/* implicit */unsigned long long int) 7073259474111041973LL)) ^ (var_9));
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_40 [i_15]))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32743)) * (((/* implicit */int) (unsigned short)65524))));
        }
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2605664020913934377LL)) ? (((/* implicit */int) (short)-8865)) : (((/* implicit */int) (unsigned short)25676))))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_7);
}
