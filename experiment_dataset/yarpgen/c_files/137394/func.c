/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137394
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
    var_14 &= ((/* implicit */unsigned int) ((_Bool) (~(var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [1] [i_0] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(var_7)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (10149422468291756290ULL)))));
        var_15 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) (unsigned short)35681)) : (((/* implicit */int) ((3660931215U) <= (var_3))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3848245109521804528LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35673))) : (634036088U)));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)29446))) + (3848245109521804527LL))))))));
            arr_6 [(_Bool)1] [12ULL] &= ((/* implicit */long long int) (short)32767);
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_0] = ((signed char) (!(((/* implicit */_Bool) var_5))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned short)7)), (-93709526477020605LL))) >> (((((((/* implicit */_Bool) 9223372036854775803LL)) ? (var_4) : (((/* implicit */unsigned long long int) var_6)))) - (1874263963071375280ULL)))))) * (0ULL)));
                            arr_19 [i_0] [i_0] [i_0] [(short)9] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) (_Bool)1)), (-1LL))))));
                        }
                        arr_20 [i_0] [4LL] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) (!(((16848865043693118631ULL) == (var_5)))));
                    }
                } 
            } 
            arr_21 [14LL] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) > (var_5)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (short i_8 = 3; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-59)) / (((/* implicit */int) (signed char)59)))))));
                            arr_30 [6LL] [i_2] [i_6] [i_2] [6LL] [i_7] [i_2] = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) / (var_7))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((int) 4294967290U)) % (((/* implicit */int) var_12)))))));
                arr_31 [i_0] [i_0] = ((2920217828637728011LL) == (((/* implicit */long long int) var_6)));
            }
            arr_32 [7LL] [i_0] [7LL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) | (143583845U)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-22314))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) var_0);
                        arr_39 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-84))));
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */unsigned short) var_6);
                            arr_43 [i_9] [i_9] = ((/* implicit */short) (signed char)-108);
                            var_25 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) - (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_26 = (-(((/* implicit */int) var_12)));
                            arr_46 [i_10] [i_10] [(short)8] [i_10] &= ((/* implicit */unsigned short) (_Bool)1);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)29865)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36662)))));
                            arr_47 [i_0 - 1] [(signed char)10] [i_0 - 1] [(short)4] [i_9] = ((/* implicit */long long int) (~(var_5)));
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)29208))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [(short)14] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29208))) : (var_9)))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)29208))))));
                            arr_51 [i_10] &= ((/* implicit */short) ((unsigned short) (short)13576));
                            var_29 &= ((/* implicit */long long int) var_3);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
                        }
                        arr_52 [i_0] [i_9] [i_10] [i_11 - 1] &= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
            arr_53 [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)12)) & (((/* implicit */int) var_12))));
            arr_54 [i_9] [i_9] [i_0] = (unsigned short)26226;
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                for (signed char i_16 = 2; i_16 < 16; i_16 += 1) 
                {
                    for (signed char i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_64 [i_0 - 2] [i_0 - 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)29210))) ? (((/* implicit */int) ((((/* implicit */int) (short)30741)) <= (((/* implicit */int) var_1))))) : (((/* implicit */int) (_Bool)1))));
                            arr_65 [i_0 + 2] [i_0 + 2] [i_15] [i_9] [i_17] = ((/* implicit */short) (signed char)42);
                            arr_66 [i_0] [i_0] [i_9] = ((/* implicit */signed char) (~(var_10)));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_18 = 1; i_18 < 15; i_18 += 2) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) & (((-738656794) - (((/* implicit */int) (unsigned char)0))))))) ? (min((((/* implicit */unsigned long long int) (short)8191)), (10673775787817725978ULL))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (var_5))))))))));
            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_7))))))))));
        }
        arr_69 [i_0 + 1] = ((/* implicit */_Bool) (unsigned short)62339);
        arr_70 [i_0] [17LL] &= ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-6865691174998797674LL))), (((/* implicit */long long int) max(((unsigned short)3193), (((/* implicit */unsigned short) (short)-32766)))))));
    }
}
