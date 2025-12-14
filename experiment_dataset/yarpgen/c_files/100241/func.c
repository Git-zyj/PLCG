/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100241
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32757)) && (((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (var_15))) + (9223372036854775807LL))) >> (((min((((/* implicit */int) (short)-32761)), (-745252080))) + (745252108))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) (+(8880429231033065012ULL)));
                        arr_13 [(_Bool)1] [i_1] [i_2] [i_0] [i_3] [i_2] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (signed char)-4)))));
                        var_18 *= ((/* implicit */_Bool) var_6);
                        var_19 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & ((+(((/* implicit */int) (unsigned short)0))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+((-2147483647 - 1)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_22 ^= ((/* implicit */_Bool) (short)(-32767 - 1));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_15 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_21 [i_0] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_4])))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2261168431643583383LL)) >= (13397159789618198828ULL)));
                        var_25 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned short)16368))))));
                        var_26 = ((/* implicit */_Bool) ((var_5) ? (6974306335361653475ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)58421)))));
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) arr_9 [i_0] [i_5] [i_7])) + (170))) - (27))))), (((/* implicit */int) ((short) var_8)))))) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) -7280330844906909610LL)))), ((!(((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) (unsigned short)7114))))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_18 [i_7] [i_5] [i_4] [i_0])))) ? (max((-1845850623), (((/* implicit */int) var_10)))) : (((/* implicit */int) ((arr_21 [i_0] [7]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                    }
                    arr_24 [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [i_4] [i_4] [i_5]))))) & (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (4294967284U) : (2758244695U)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
    {
        var_29 = ((((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 1])) - (((/* implicit */int) arr_25 [i_8 + 1] [i_8])));
        /* LoopNest 3 */
        for (unsigned short i_9 = 4; i_9 < 18; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    {
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (~(((long long int) (_Bool)0)))))));
                        var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)7593)) && (((/* implicit */_Bool) (signed char)-21))))) : (((/* implicit */int) (!(var_5))))));
                    }
                } 
            } 
        } 
        var_32 = var_6;
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((0LL) ^ (arr_7 [12] [i_12 + 1]))))))));
        var_34 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min(((short)-5490), (((/* implicit */short) (signed char)14))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)8191)) ? (var_9) : (arr_5 [i_12] [i_12]))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) 6979139019944621408ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) : (22U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7116))))))))));
        arr_40 [i_12] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20861))) : (arr_39 [i_12])))));
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (((-((-(4294967262U))))) ^ (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)58406)) ? (((/* implicit */int) (unsigned short)18316)) : (((/* implicit */int) (short)7936))))))))))));
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)63821)))))) ? ((((+(((/* implicit */int) (_Bool)0)))) ^ ((~(((/* implicit */int) arr_38 [i_13])))))) : (((((((/* implicit */int) (unsigned short)47220)) / (-393937993))) ^ (((((/* implicit */_Bool) (short)-7937)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)4))))))));
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        arr_52 [i_13] [i_14] [i_15] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13 + 1] [i_13 + 1]))) > (536870911ULL)))) : (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (unsigned short)7134)) : (((/* implicit */int) (signed char)47))))));
                        arr_53 [i_16] [i_16] [i_15] [i_16] [i_16] [(short)2] |= ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)30883)))), (((/* implicit */int) (unsigned short)58401))))) ? (((arr_20 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17542200683081189458ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_16] [i_15]))) : (4294967274U)))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (unsigned short)7114))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18327)))))) : (17331406797884353488ULL)))));
                        arr_54 [i_13 + 1] [i_16] [i_16] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_14])) : (((/* implicit */int) (unsigned short)51267))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_31 [i_13] [i_15]))))) : (var_7)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) -689054333)) | (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_13] [(unsigned short)13] [i_15] [i_15] [(_Bool)1] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_5 [i_13 + 1] [i_14])))) : (((4526535612843418634ULL) << (((arr_22 [i_15]) - (591238907)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            for (signed char i_18 = 1; i_18 < 7; i_18 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)14268)), ((+(((((/* implicit */_Bool) (unsigned short)55494)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)5658)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (((+(min((((/* implicit */unsigned long long int) arr_22 [i_19])), (arr_20 [i_13] [i_17] [i_18] [i_19]))))) % (((/* implicit */unsigned long long int) min((6U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (16777215) : (((/* implicit */int) (_Bool)1)))))))))))));
                                arr_65 [i_18] [i_18] [i_18] [i_18] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_13] [i_19])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0)))))))) | (((((/* implicit */_Bool) max((arr_43 [i_19] [i_20]), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (short)23396))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (arr_37 [i_13]) : (((/* implicit */long long int) var_0))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_55 [i_13 + 1] [i_13 + 1]))))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned char) ((((var_9) + (9223372036854775807LL))) >> ((((-(min((((/* implicit */long long int) (unsigned short)10025)), (5705309714948894724LL))))) + (10042LL)))));
}
