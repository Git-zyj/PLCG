/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127063
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            arr_5 [20LL] [i_1 + 3] [i_1 + 2] = ((/* implicit */unsigned char) ((((12906851126052664183ULL) >> (((1526850829) - (1526850810))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) % (-1752342427))))));
            var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-1))));
        }
        arr_6 [i_0] &= ((/* implicit */unsigned long long int) (~(3)));
    }
    for (int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        var_11 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)255)) ? (-20LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105))))), (((/* implicit */long long int) min((228553687U), (((/* implicit */unsigned int) (unsigned char)21)))))));
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_12 ^= ((/* implicit */unsigned char) (~(((((887806512) == (((/* implicit */int) (short)-11128)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6874))) * (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)64612))) % (5076018048989386480LL))))))));
            var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(-137086870)))), ((+(496256034U)))))) || ((_Bool)1)));
            var_14 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) -620646340)) ? (-1752342427) : (-2058509245)))))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) min(((~(min((((/* implicit */unsigned int) (unsigned short)924)), (1267936483U))))), (((/* implicit */unsigned int) ((min((((/* implicit */int) (unsigned char)23)), (-340943441))) % (((/* implicit */int) ((((/* implicit */_Bool) -1752342417)) || (((/* implicit */_Bool) 16456497966185424091ULL))))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(min((((/* implicit */int) (!(((/* implicit */_Bool) 1752342419))))), (-620646332))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                arr_18 [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((-1084600728) * (((/* implicit */int) (_Bool)0))))), (((3726090149239293875ULL) + (((/* implicit */unsigned long long int) -1LL)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)35214))))) + ((-(1497132591U))))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((437759710U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (short)-1)))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)23496)) ? (1752342417) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned char)255)))))));
                var_17 += (-((+((~(((/* implicit */int) (_Bool)1)))))));
            }
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-65)))), (((-1752342417) ^ (((/* implicit */int) (unsigned char)136))))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)8722)) == (((/* implicit */int) (unsigned char)114)))) && (((/* implicit */_Bool) 7338528533108182196ULL))))) : (1745648920)));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            arr_23 [i_2] = ((/* implicit */unsigned short) ((-5223000434423455774LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42028)))));
            arr_24 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)0))));
            arr_25 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23496)) ? (((/* implicit */unsigned int) -599805806)) : (4294967295U)));
        }
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            arr_29 [i_2 + 2] [i_7] |= ((/* implicit */unsigned short) (~(((((((-1752342417) + (2147483647))) >> (((/* implicit */int) (unsigned short)0)))) | ((~(((/* implicit */int) (unsigned short)2993))))))));
            var_19 |= ((/* implicit */signed char) ((((max((((/* implicit */unsigned int) (unsigned short)37937)), (5U))) << (((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (signed char)-65)))) + (206))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13265286454075044291ULL))))))));
            arr_30 [i_7] [i_7] [i_2] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) < (16872796115243755390ULL))))) * (((((5181457619634507324ULL) + (((/* implicit */unsigned long long int) 16383)))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)231)), (-1LL))))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        arr_34 [i_8] |= ((/* implicit */long long int) (((-(-587790948))) != (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        var_20 &= ((/* implicit */unsigned short) (+((~(min((1573947958465796217ULL), (16872796115243755398ULL)))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)34)) || (((/* implicit */_Bool) (signed char)-1)))) && (((/* implicit */_Bool) var_0))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((5889995735610534083LL) >> (((((/* implicit */int) (unsigned short)14279)) - (14270)))))))))));
    var_22 = ((/* implicit */unsigned char) var_0);
}
